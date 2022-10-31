class Solution {
public:
    static bool cmp(pair<int,int> a,pair<int,int> b)
    {
        return a.second<b.second;
    }
    vector<int> topKFrequent(vector<int>& a, int k) {
        set<int>se;
        vector<int>v;
        vector<pair<int,int>>vp;
        map<int,int>mp;
        for(auto x:a)
        {
            se.insert(x);
            mp[x]++;
        }
        for(auto x:se)
            vp.push_back(make_pair(x,mp[x]));
        sort(vp.begin(),vp.end(),cmp);
        int n=vp.size();
        for(int i=n-k;i<n;i++)
            v.push_back(vp[i].first);
        return v;
    }
};
