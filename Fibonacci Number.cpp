class Solution {
public:
    int fi[31];
    void init()
    {
        fi[0]=0,fi[1]=1;
        for(int i=2;i<31;i++)
            fi[i]=fi[i-1]+fi[i-2];
    }
    int fib(int n) {
        init();
        return fi[n];
    }
};
