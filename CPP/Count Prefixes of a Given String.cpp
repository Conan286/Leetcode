class Solution {
public:
    int countPrefixes(vector<string>& w, string s) {
        int cnt=0;
        for(string x:w)
        {
            int n=x.size(),i=0,check=1;
            while(i<n)
                if(x[i]!=s[i++])
                {
                   check=0;
                    break;
                }
            if(check)++cnt;
        }
        return cnt;
    }
};
