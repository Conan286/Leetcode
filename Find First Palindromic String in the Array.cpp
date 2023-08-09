class Solution {
public:
    bool check(string s)
    {
        int l=0,r=s.length()-1;
        while(l<r) if(s[l++]!=s[r--]) return 0;
        return 1;
    }
    string firstPalindrome(vector<string>& w) {
        string s="";
        int n=w.size();
        for(int i=0;i<n;i++)
            if(check(w[i]))
                return w[i];
        return s;
    }
};
