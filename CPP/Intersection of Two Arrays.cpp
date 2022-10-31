class Solution {
public:
    vector<int> intersection(vector<int>& a1, vector<int>& a2) {
        set<int>s,s2;
        vector<int>v;
        for(auto x:a1) s.insert(x);
         for(auto x:a2) s2.insert(x);
        for(auto x:s2) if(s.find(x)!=s.end()) v.push_back(x);
        return v;
    }
};
