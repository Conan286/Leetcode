class Solution {
public:
    int finalValueAfterOperations(vector<string>& s) {
        int x=0,n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i][1]=='+')++x;
            else --x;
        }
        return x;
    }
};
