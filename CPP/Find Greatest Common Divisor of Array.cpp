class Solution {
public:
    int gcd(int a,int b)
    {
        if(a%b==0) return b;
        return gcd(b,a%b);
    }
    int findGCD(vector<int>& a) {
        sort(a.begin(),a.end());
        return gcd(a[0],a[a.size()-1]);
    }
};
