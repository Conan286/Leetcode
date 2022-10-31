class Solution {
public:
    int tri[38];
    void init()
    {
        tri[0]=0;
        tri[1]=1;
        tri[2]=1;
        for(int i=3;i<38;i++)
            tri[i]=tri[i-1]+tri[i-2]+tri[i-3];
    }
    int tribonacci(int n) {
        init();
        return tri[n];
    }
};
