class Solution {
public:
    int findLucky(vector<int>& v) {
        map<int,int>mp;
        int n=v.size();
        set<int>se;
        for(int i=0;i<n;i++) {
            mp[v[i]]++;
         se.insert(v[i]);
    }
        int ans=-1;
        for(auto x:se)
            if(mp[x]==x)
                ans=x;
        return ans;
    }
};
