class Solution {
public:
    int repeatedNTimes(vector<int>& a) {
        map<int,int>mp;
        int n=a.size();
        for(auto x:a)mp[x]++;
        for(auto x:a) if(mp[x]==n/2) return x;
        return -1;
    }
};
