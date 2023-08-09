class Solution {
public:
    bool divideArray(vector<int>& a) {
        set<int>s;
        map<int,int>mp;
        for(auto x:a)
        {
            s.insert(x);
            mp[x]++;
}
        for(auto x:s) if(mp[x]%2!=0) return 0;
        return 1;
    }
};
