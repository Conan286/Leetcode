class Solution {
public:
    string decodeMessage(string key, string mes) {
        map<char,char>mc;
        map<char,int>mp;
        int n=key.length();
        char c='a';
        for(int i=0;i<n;i++)
        {
            if(c>'z') break;
            if(isalpha(key[i])&&mp[key[i]]<1){
                mc[key[i]]=(char)c++;
                mp[key[i]]=1;
            }
            else continue;
        }
        string s;
        n=mes.length();
        for(int i=0;i<n;i++)
        {
            if(mes[i]!=' ') s+=mc[mes[i]];
            else s+=" ";
}
        return s;
    }
};
