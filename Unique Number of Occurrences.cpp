class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        set<int>s1,s2;
        for(auto x:arr)
        {
            mp[x]++;
            s1.insert(x);
        }
        for(auto x:s1)
            s2.insert(mp[x]);
        return s1.size()==s2.size();

    }
};
