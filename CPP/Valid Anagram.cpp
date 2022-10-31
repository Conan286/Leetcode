class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return 0;
        int n=s.length();
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto x:s) if(mp[x]) return 0;
        return 1;
    }
};
