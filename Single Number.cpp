class Solution {
public:
    int singleNumber(vector<int>& v) {
        map<int,int>mp;
        for(auto x:v) mp[x]++;
        for(int i=0;i<v.size();i++)
            if(mp[v[i]]==1) return v[i];
        return -1;
    }
};
