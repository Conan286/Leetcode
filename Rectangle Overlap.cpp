class Solution {
public:
    bool isRectangleOverlap(vector<int>& a, vector<int>& b) {
        return ((a[0]<b[2] and b[0]<a[2])and(a[1]<b[3]and a[3]>b[1]));
    }
};
