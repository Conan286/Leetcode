class Solution {
public:
    int rev(int n)
    {
        int k=0;
        while(n>0)
        {
        k=k*10+n%10;
        n/=10;
        }
        return k;
    }
    bool sumOfNumberAndReverse(int num) {
        for(int i=num/2;i<=num;i++)
            if(i+rev(i)==num) return 1;
        return 0;
    }
};
