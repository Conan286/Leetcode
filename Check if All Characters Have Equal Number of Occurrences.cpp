class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;
        for(auto i:s)
            mp[i]++;
        for(auto i:s)
            if(mp[i]!=mp[s[0]])
                return 0;
        return 1;
    }
};
