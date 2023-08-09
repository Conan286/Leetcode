class Solution {
public:
    int sum(int n)
    {
     int s=0;
        while(n)
        {
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int countEven(int num) {

        return sum(num)%2==0?(num/2):((num-1)/2);
    }
};
