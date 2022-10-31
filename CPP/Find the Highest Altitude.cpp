class Solution {
public:
    int largestAltitude(vector<int>& g) {
        int n=g.size();
        int a[n+1];
        a[0]=0;
        int m=0;
        for(int i=0;i<n;i++){
            a[i+1]=g[i]+a[i];
            m=max(m,a[i+1]);
    }
        return m;
    }
};
