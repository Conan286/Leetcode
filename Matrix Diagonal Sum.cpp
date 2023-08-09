class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size(),s=0;
        for(int i=0;i<n;i++)
            s+=(mat[i][i]+mat[i][n-i-1]);
        if(n%2==1) return s-mat[n/2][n/2];
        return s;
    }
};
