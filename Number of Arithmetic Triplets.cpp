class Solution {
public:
    int arithmeticTriplets(vector<int>& a, int k) {
        map<int,int>mp;
        int n=a.size(),cnt=0;
        for(int i=0;i<n;i++)
            mp[a[i]]++;
        for(int i=0;i<n;i++)
            if(mp[a[i]+k]&&mp[a[i]+2*k])
                ++cnt;
        return cnt;
    }
};
