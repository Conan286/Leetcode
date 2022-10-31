class Solution {
public:
    int mostFrequentEven(vector<int>& a) {
        map<int,int>mp;
        set<int>se;
        int n=a.size(),k=0;
        for(auto x:a)
        {
            if(x%2!=0) continue;
            mp[x]++;
            se.insert(x);
            k=max(k,mp[x]);
        }
        for(auto x:se)
            if(mp[x]==k)
                return x;
        return -1;
    }
};
