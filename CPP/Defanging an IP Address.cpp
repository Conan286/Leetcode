class Solution {
public:
    string defangIPaddr(string str) {
        string s="";
        int n=str.length();
        for(int i=0;i<n;i++){
          if(str[i]=='.')s+="[.]";
            else s+=str[i];
    }
        return s;
    }
};
