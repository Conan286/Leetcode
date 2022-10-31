class Solution {
public:
    vector<vector<int>> permute(vector<int>& a) {
        sort(a.begin(),a.end());
         vector<vector<int>> v;
        do{
            v.push_back(a);
        }while(next_permutation(a.begin(),a.end()));
        return v;
    }
};
