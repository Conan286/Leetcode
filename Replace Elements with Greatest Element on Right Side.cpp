class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        int n=a.size();
        vector<int> v(n);
        int m=-1;
        v[n-1]=m;
        for(int i=n-1;i>0;i--)
            v[i-1]=max(v[i],m=a[i]);
        return v;
    }
};
