class Solution {
public:
    string truncateSentence(string s, int k) {
        string tmp,s1;
        int cnt=0;
        stringstream ss(s);
        while(ss>>tmp)
        {
            cnt++;
            s1+=tmp;
            if(cnt==k) break;
            s1+=" ";
        }
    return s1;
    }
};
