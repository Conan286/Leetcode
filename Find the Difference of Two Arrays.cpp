class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& a1, vector<int>& a2) {
        vector<vector<int>> v(2);
        set<int>s1,s2;
        for(auto x:a1) s1.insert(x);
        for(auto x:a2) s2.insert(x);
        for(auto x:s1) if(s2.find(x)==s2.end()) (v[0]).push_back(x);
        for(auto x:s2) if(s1.find(x)==s1.end())( v[1]).push_back(x);
        return v;
    }
};
