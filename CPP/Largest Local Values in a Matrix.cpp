class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& g) {
        int n=g.size();
        vector<vector<int>> a(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++)
            for(int j=0;j<n-2;j++)
                for(int k=i;k<i+3;k++)
                    for(int h=j;h<j+3;h++)
                        a[i][j]=max(a[i][j],g[k][h]);
        return a;
    }
};
