class Solution {
public:
    bool isUgly(int n) {
        if(n<1) return 0;
     for(int i=2;i<=sqrt(n);i++)
     {
         if(n%i==0){
             if(i>5) return 0;
         while(n%i==0)n/=i;
         }
     }
        return n<7;
    }
};
