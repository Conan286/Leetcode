class Solution {
public:
    string sortSentence(string s) {
        vector<string>vs;
        vector<int>vi;
        map<int,string>mp;
        string tmp,s1="";
        stringstream ss(s);
        int m=0;
        while(ss>>tmp)
        {
            int n=tmp.size()-1;
            int k=tmp[n]-'0';
            tmp.erase(n,1);
            mp[k]=tmp;
            m=max(m,k);
        }
        for(int i=0;i<m;i++) {
            s1+=mp[i];
            s1+=" ";
        }
        s1+=mp[m];
        while(s1[0]==' ') s1.erase(0,1);
        return s1;
    }
};
