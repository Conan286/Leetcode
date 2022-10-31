class Solution {
public:
    double findMedianSortedArrays(vector<int>& a1, vector<int>& a2) {
       vector<int>v;
        for(auto x:a1) v.push_back(x);
        for(auto x:a2) v.push_back(x);
        int n=v.size();
        sort(v.begin(),v.end());
        if(n%2!=0) return v[n/2];
        return (v[n/2]+v[n/2 -1])/2.0;
    }
};
