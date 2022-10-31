class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string s1,tmp;
        while(ss>>tmp)
        {
            reverse(tmp.begin(),tmp.end());
            s1+=tmp;
            s1+=" ";
        }
        while(s1[s1.size()-1]==' ') s1.erase(s1.size()-1,1);
        return s1;
    }
};
