class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n=v.size(),m=v[0];
        map<int,int>mp;
        mp.clear();
        for(int i=0;i<n;i++)
        {
            mp[v[i]]++;
            m=max(m,v[i]);
        }
        for(int i=0;i<=m;i++) if(mp[i]==0) return i;
        return m+1;}
};
