class Solution {
public:
    int countAsterisks(string s) {
        int n=s.length(),cnt=0,dem=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*'&&dem%2==0)++cnt;
            if(s[i]=='|')++dem;
        }
        return cnt;
    }
};
