class Solution {
public:
    vector<int> diStringMatch(string s) {
       int n=s.size(),l=0,r=n;
        vector<int>v;
        for(int i=0;i<=n;i++)
        {
            if(s[i]=='I'||i==n) v.push_back(l++);
            else v.push_back(r--);
        }
        return v;
    }
};
