class Solution {
public:
    int countNegatives(vector<vector<int>>& g) {
        int n=g.size(),cnt=0;
        for(int i=0;i<n;i++)
            cnt+=upper_bound(g[i].rbegin(),g[i].rend(),-1)-g[i].rbegin();
        return cnt;
    }
};
