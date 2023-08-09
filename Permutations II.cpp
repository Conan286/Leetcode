class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& a) {
    vector<vector<int>> v;

         sort(a.begin(),a.end());
        do{
            v.push_back(a);
        }while(next_permutation(a.begin(),a.end()));
        return v;
    }
};
