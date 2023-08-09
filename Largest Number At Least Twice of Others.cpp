class Solution {
public:
    int dominantIndex(vector<int>& v) {
        vector<int>a;
        a=v;
        map<int,int>mp;
        int n=a.size();
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
            mp[v[i]]=i;
        return ((a[n-2]*2)>a[n-1])?(-1):(mp[a[n-1]]);
    }
};
