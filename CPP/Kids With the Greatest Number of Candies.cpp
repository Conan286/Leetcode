class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& v, int c) {
        int n=v.size();
        vector<bool> a(n);
        int m=0;
        for(int i=0;i<n;i++) m=max(m,v[i]);
        for(int i=0;i<n;i++) a[i]=(v[i]+c)>=m;
            return a;
    }
};
