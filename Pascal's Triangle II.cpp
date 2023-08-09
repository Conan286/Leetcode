class Solution {
public:
    vector<int> getRow(int r) {
        vector<int>v(r+1);
        v[0]=1;
        for(int i=0;i<=r;i++)
              for(int j=i;j>0;j--)
                v[j]+=v[j-1];
        return v;
    }
};
