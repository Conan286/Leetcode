class Solution {
public:
    bool isPerfectSquare(int num) {
        int k=sqrt(num);
        return k*k==num;
    }
};
