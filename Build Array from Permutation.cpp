class Solution {
public:
    vector<int> buildArray(vector<int>& v) {
        int n=v.size();
        vector<int>a(n);
        for(int i=0;i<v.size();i++) a[i]=v[v[i]];
                return a;
            }
};
