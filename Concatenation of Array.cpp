class Solution {
public:
    vector<int> getConcatenation(vector<int>& v) {
        int n=v.size();
        vector<int>a(2*n);
        for(int i=0;i<2*n;i++) a[i]=v[i%n];
        return a;
    }
};
