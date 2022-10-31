class Solution {
public:
    int maximumWealth(vector<vector<int>>& v) {
        int m=0,n=v.size();
        for(int i=0;i<n;i++)
        {
            int k=0;
            for(int j=0;j<v[i].size();j++) k+=v[i][j];
            m=max(m,k);
        }
        return m;
    }
};
