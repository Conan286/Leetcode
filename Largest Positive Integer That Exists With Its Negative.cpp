class Solution {
public:
    int findMaxK(vector<int>& v) {
        sort(v.begin(),v.end());
        map<int,int>mp;
        int n=v.size();
        int k=upper_bound(v.begin(),v.end(),0)-v.begin();
        for(int i=0;i<k;i++)
            mp[v[i]]++;
        for(int i=n-1;i>=k;i--)
            if(mp[-v[i]]>0)
                return v[i];
        return -1;

    }
};
