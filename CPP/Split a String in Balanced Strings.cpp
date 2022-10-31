class Solution {
public:
    int balancedStringSplit(string s) {
      int n=s.length(),cnt=0;
        map<int,char>mp;
        set<char>se;
        for(int i=0;i<n;i++)
        {
            se.insert(s[i]);
            mp[s[i]]++;
            if(se.size()==2&&mp['L']==mp['R']){
                mp.clear();
                se.clear();
                ++cnt;
            }
        }
        return cnt;
    }
};
