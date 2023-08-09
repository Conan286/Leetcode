class Solution {
public:
    vector<int> shuffle(vector<int>& v, int n) {
        vector<int>a(2*n);
            int j=0;
            for(int i=0;i<n;i++){
                a[j++]=v[i];
                a[j++]=v[i+n];
            }
        return a;
    }
};
