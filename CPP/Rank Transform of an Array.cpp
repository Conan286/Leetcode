class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        set<int>s(a.begin(),a.end());
        map<int,int>rank;
        vector<int> v;
        int cnt=1;
        for(auto x:s)
        rank[x]=cnt++;
        for(auto x:a)
            v.push_back(rank[x]);
        return v;
    }
};
