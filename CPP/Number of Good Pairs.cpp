class Solution {
public:
    int numIdenticalPairs(vector<int>& v) {
        map<int,int>mp;
        set<int>s;
        int n=v.size();
        for(int i=0;i<n;i++) {
            mp[v[i]]++;
            s.insert(v[i]);
    }
        int ans=0;
        for(auto x:s) {ans+=(mp[x]*(mp[x]-1))/2;}
        return ans;
    }
};
