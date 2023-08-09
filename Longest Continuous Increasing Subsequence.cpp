class Solution {
public:
    int findLengthOfLCIS(vector<int>& a) {
        int ans=0;
        int n=a.size(),l[n];
        l[0]=1;
        for(int i=1;i<n;i++)
            (a[i]>a[i-1])?(l[i]=l[i-1]+1):(l[i]=1);
        return *max_element(l,l+n);
    }
};
