class Solution {
public:
    int findMaxK(vector<int>& v) {
        sort(v.begin(),v.end());
        map<int,int>mp;
        int k=upper_bound(v.begin(),v.end(),0)-v.begin();
        int n=v.size();
        for(int i=0;i<k;i++)
            mp[v[i]]++;
        for(int i=n-1;i>=k;i--)
        {
            if(mp[-v[i]]>0) return v[i];
        }
        return -1;
    }
};
