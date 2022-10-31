class Solution {
public:
    string restoreString(string s, vector<int>& v) {
        string a;
        int n=v.size();
        map<int,char>mp;
        for(int i=0;i<n;i++)
            mp[v[i]]=s[i];
        sort(v.begin(),v.end());
        for(auto x:v) a+=mp[x];
        return a;
    }
};
