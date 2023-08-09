class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v;
        for(int i=1;i<=n;i++){
            vector<int>v1(i,1);
            for(int j=1;j<i-1;j++)
            v1[j]=v[i-2][j-1]+v[i-2][j];
            v.push_back(v1);
        }
        return v;
    }
};
