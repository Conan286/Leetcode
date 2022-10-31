class Solution {
public:
    static bool cmp(vector<int> a,vector<int> b)
    {
        return ((a[0]*a[0]+a[1]*a[1])<(b[0]*b[0]+b[1]*b[1]));
    }
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        vector<vector<int>>v;
        sort(p.begin(),p.end(),cmp);
        for(int i=0;i<k;i++)
            v.push_back(p[i]);
        return v;

    }
};
