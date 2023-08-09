class Solution {
public:
    double average(vector<int>& a) {
        int ma=*max_element(a.begin(),a.end());
        int mi=*min_element(a.begin(),a.end());
        double ans=0;
        int cnt=0;
        for(auto x:a)
        if(x!=mi and x!=ma)
            {
            ans+=x;
            ++cnt;
            }
        return ans/cnt;
    }
};
