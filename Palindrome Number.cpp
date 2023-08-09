class Solution {
public:
    bool isPalindrome(long long x) {
        long long k=x,n=0;
        while(x>0){
            n=n*10+x%10;
            x/=10;
        }
        return n==k;
    }
};
