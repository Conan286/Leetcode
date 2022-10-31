class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1) return 0;
        while(n>=3)
        {
            if(n%3!=0) return 0;
            n/=3;
        }
        return n==1;
    }
};
