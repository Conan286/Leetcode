class Solution {
public:
    vector<int> intersect(vector<int>& a1, vector<int>& a2) {
        multiset<int>ms2;
        map<int,int>mp;
        vector<int> v;
        for(auto x:a2)ms2.insert(x);
        for(auto x:a2)mp[x]++;
        for(auto x:a1)
            if(mp[x]>0&&ms2.find(x)!=ms2.end()) {
            v.push_back(x);
            mp[x]--;
        }
        return v;
    }
};
