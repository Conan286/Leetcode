class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        map<int,int>mp;
        vector<int> v;
        int n=p.size();
        for(int i=0;i<n-1;i++)
        {
            mp[i]=i;
            for(int j=i+1;j<n;j++)
                if(p[j]<=p[i])
                {
                    mp[i]=j;
                    break;
                }
        }
        for(int i=0;i<n;i++)
        {
            if(mp[i]>i) v.push_back(p[i]-p[mp[i]]);
            else v.push_back(p[i]);
        }
        return v;
    }
};
