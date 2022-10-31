class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        int n=a.size();
        sort(a.begin(),a.end());
        return a[n-k];
    }
};
