class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string tmp;
        int cnt=0;
        while(ss>>tmp)++cnt;
        return cnt;
    }
};
