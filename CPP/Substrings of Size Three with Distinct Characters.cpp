class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size(),cnt=0;
        set<char>se;
        for(int i=0;i<n-2;i++){
        se.clear();
        for(int j=i;j<i+3;j++)
        se.insert(s[j]);
            if(se.size()>2)++cnt;
    }
        return cnt;
    }
};
