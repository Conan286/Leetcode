class Solution {
public:
    int prefixCount(vector<string>& w, string s) {
        int n=w.size(),m=s.size(),cnt=0;
        for(int i=0;i<n;i++)
        {
            int c=1;
            for(int j=0;j<m;j++)
                if(w[i][j]!=s[j])
                {
                    c=0;
                    break;
                }
            if(c)++cnt;
        }
        return cnt;
    }
};
