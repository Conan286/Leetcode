class Solution {
public:

    long long arrangeCoins(long long n) {
    long k=(sqrt(2*n));
    while(k)
    {
        if((k*(k+1)/2)<=n) return k;
        k--;
    }
        return 1;
    }
};
