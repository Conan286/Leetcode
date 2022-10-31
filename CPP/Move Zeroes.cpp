class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n=a.size();
        vector<int>mts;
        for(auto x:a) if(x!=0) mts.push_back(x);
        int m=mts.size(),i=0;
        for(auto x:mts) a[i++]=x;
        for(int i=m;i<n;i++) a[i]=0;
    }
};
