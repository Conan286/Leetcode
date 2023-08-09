class Solution {
public:
    int countOperations(int num1, int num2) {
        int cnt=0;
        if(num2<1) return cnt;
        while(num1>0)
        {
            if(num1>=num2)
                num1-=num2;
            else num2-=num1;
            ++cnt;
        }
        return cnt;
    }
};
