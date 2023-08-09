class Solution {
public:
    bool rotateString(string s, string g) {
        return ((s+s).find(g)!=string::npos)and(s.size()==g.size());
    }
};
