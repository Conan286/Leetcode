class Solution {
public:
    bool isPrefixString(string s, vector<string>& w) {
        string tmp;
        for(string x:w)
        {
            tmp+=x;
            if(tmp==s) return 1;
        }
        return 0;
    }
};
