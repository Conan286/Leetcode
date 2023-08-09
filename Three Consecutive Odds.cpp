class Solution {
public:
    bool odd(int n)
    {
        return n%2!=0;
    }
    bool threeConsecutiveOdds(vector<int>& a) {
        int n=a.size();
        if(n<3) return 0;
        for(int i=1;i<n-1;i++)
            if(odd(a[i]) and odd(a[i-1]) and odd (a[i+1]))
                return 1;
        return 0;
    }
};
