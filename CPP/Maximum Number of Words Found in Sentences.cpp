class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int n=s.size(),m=0;
        for(int i=0;i<n;i++)
        {
            string tmp;
            int cnt=0;
            stringstream ss(s[i]);
            while(ss>>tmp)++cnt;
            m=max(m,cnt);
        }
        return m;
    }
};
