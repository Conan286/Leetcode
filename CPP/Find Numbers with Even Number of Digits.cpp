class Solution {
public:
    int findNumbers(vector<int>& itg) {
        string tmp;
        int n=itg.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            tmp=to_string(itg[i]);
            if(tmp.size()%2==0)++cnt;
        }
           return cnt;
    }
};
