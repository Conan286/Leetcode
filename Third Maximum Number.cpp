class Solution {
public:
    int thirdMax(vector<int>& v) {
        vector<int>vt;
        set<int>s(v.begin(),v.end());
        for(auto x:s)vt.push_back(x);
        int n=vt.size();
        return (s.size()<3)?(vt[n-1]):(vt[n-3]);
    }
};
