class Solution {
public:
    vector<int> decompressRLElist(vector<int>& a) {
        int n=a.size();
        vector<int>v;
        for(int i=1;i<n;i+=2)
            for(int j=0;j<a[i-1];j++)
                v.push_back(a[i]);
                return v;
    }
};
