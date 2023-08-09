class Solution {
public:
    int minPairSum(vector<int>& v) {
        sort(v.begin(),v.end());
        int n=v.size();
        int res=v[n-1]+v[0];
        for(int i=0;i<n/2;i++)
            res=max(v[i]+v[n-i-1],res);
        return res;
    }
};
