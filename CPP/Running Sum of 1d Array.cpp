class Solution {
public:
    vector<int> runningSum(vector<int>& v) {
        int n=v.size();
     for(int i=1;i<n;i++) v[i]+=v[i-1];
        return v;
    }
};
