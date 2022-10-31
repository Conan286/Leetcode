class Solution {
public:
    int countKDifference(vector<int>& a, int k) {
        map<int,int>mp;
        set<int>se;
        int cnt=0;
        for(auto x:a){
            mp[x]++;
            se.insert(x);
        }
        for(auto x:se) cnt+=mp[x]*mp[x+k];
        return cnt;
    }
};
