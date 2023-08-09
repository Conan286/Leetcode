class Solution {
public:
    int maximumProduct(vector<int>& v) {
        sort(v.begin(),v.end());
        int n=v.size();
        return max(v[0]*v[1]*v[n-1],v[n-3]*v[n-2]*v[n-1]);
    }
};
