class Solution {
public:
    int arrayPairSum(vector<int>& v) {
        sort(v.begin(),v.end());
        int n=v.size(),s=0;
        for(int i=0;i<n;i+=2)
            s+=min(v[i],v[i+1]);
        return s;
    }
};
