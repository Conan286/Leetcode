class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string s1,s2;
        for(auto x:w1)s1+=x;
        for(auto x:w2)s2+=x;
        return s1==s2;
    }
};
