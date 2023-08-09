class Solution {
public:
    int minOperations(vector<int>& a) {
        int n=a.size(),cnt=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1]) continue;
            else {
                cnt+=a[i-1]-a[i]+1;
                a[i]=a[i-1]+1;
            }
        }
        return cnt;
    }
};
