class Solution {
public:
    int commonFactors(int a, int b) {
        int cnt=1;
        if(b>a) swap(a,b);
        for(int i=2;i<=sqrt(b);i++)
        {
            if(b%i==0&&a%i==0&&i*i!=b)++cnt;
            if(b%i==0&&a%(b/i)==0&&i*i!=b)++cnt;
            if(b%i==0&&a%i==0&&i*i==b)++cnt;
        }
        if(a%b==0&&a>1)++cnt;
        return cnt;
    }
};
