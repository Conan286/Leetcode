class Solution {
public:
    bool checkIfPangram(string s) {
        set<char>se;
        int n=s.length();
        for(int i=0;i<n;i++)
            se.insert(s[i]);
        return se.size()==26;
    }
};
