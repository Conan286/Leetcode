class Solution {
public:
    int addDigits(int n) {
   int s=0;
        while(n>0){
            s+=n%10;
            n/=10;
        }
        if(s<10) return s;
        return addDigits(s);
    }
};
