class Solution {
public:
    vector<int> targetIndices(vector<int>&a, int target) {
        vector<int>id;
        int n=a.size();
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++) {
            if(a[i]==target) id.push_back(i);
        }
        return id;
    }
};
