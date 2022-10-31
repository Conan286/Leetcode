class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>v;
        for(int i=0;i<matrix.size();++i)
            for(auto x:matrix[i])
                v.push_back(x);
        sort(v.begin(),v.end());
        return v[k-1];
    }
};
