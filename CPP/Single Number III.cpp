class Solution {
public:
    vector<int> singleNumber(vector<int>& a) {
        vector<int>v;
        map<int,int>mp;
        set<int>s;
        for(auto x:a)
        {
            mp[x]++;
            s.insert(x);
        }
        for(auto x:s) if(mp[x]<2) v.push_back(x);
        return v;
    }
};
