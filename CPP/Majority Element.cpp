class Solution {
public:
    int majorityElement(vector<int>& v) {
        int n=v.size();
        set<int>se;
        map<int,int>mp;
        for(int i=0;i<n;i++) {
            mp[v[i]]++;
            se.insert(v[i]);
        }
        for(auto x:se)
            if(mp[x]>n/2)
                return x;
        return -1;
    }
};
