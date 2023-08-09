class Solution {
public:
    int countConsistentStrings(string a, vector<string>& s) {
        int cnt=0;
        map<char,int>mp;
        int n=s.size();
        for(int i=0;i<a.length();i++) mp[a[i]]++;
        for(int i=0;i<n;i++)
        {
            int c=1;
            for(int j=0;j<s[i].size();j++)
                if(mp[s[i][j]]==0) {c=0; break;}
            if(c)++cnt;
        }
        return cnt;
    }
};
