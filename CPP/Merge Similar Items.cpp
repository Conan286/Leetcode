class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& it1, vector<vector<int>>& it2) {
        vector<vector<int>> v;
        set<int>s;
        map<int,int>mp;
        for(auto x:it1){
            s.insert(x[0]);
            mp[x[0]]+=x[1];
        }
        for(auto x:it2){
            s.insert(x[0]);
            mp[x[0]]+=x[1];
        }
        for(auto x:s)
        {
        vector<int>v1;
        v1.push_back(x);
        v1.push_back(mp[x]);
        v.push_back(v1);
        }
        return v;


    }
};
