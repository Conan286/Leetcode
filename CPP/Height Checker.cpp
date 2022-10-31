class Solution {
public:
    int heightChecker(vector<int>& h) {
        int cnt=0;
        vector<int>a;
        a=h;
        int n=a.size();
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
            if(a[i]!=h[i])
                ++cnt;
        return cnt;
    }
};
