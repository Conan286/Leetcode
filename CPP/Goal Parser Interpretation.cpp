class Solution {
public:
    string interpret(string s) {
        int n=s.length();
        string s1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='G') s1+=s[i];
            else if (s[i]=='('&&s[i+1]==')') s1+="o",i++;
            else s1+="al",i+=3;
        }
        return s1;
    }
};
