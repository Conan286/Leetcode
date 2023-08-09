class Solution {
public:
    int findFinalValue(vector<int>& a, int o) {
        map<int,int>mp;
        int n=a.size();
        for(auto x:a) mp[x]++;
        while(mp[o]>0)o*=2;
        return o;
    }
};
