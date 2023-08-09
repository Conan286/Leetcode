class Solution {
public:
    vector<int> createTargetArray(vector<int>& a, vector<int>& id) {
        int n=a.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        v.insert(v.begin()+id[i],a[i]);
        return v;
    }
};
