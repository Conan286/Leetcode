class Solution {
public:
    int maxProduct(vector<int>& a) {
        sort(a.begin(),a.end());
        int n=a.size();
        return (a[n-1]-1)*(a[n-2]-1);
    }
};
