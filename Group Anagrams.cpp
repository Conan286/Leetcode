class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {

        vector< pair <string,string> > vp;
        set<string> cnt;
        int j=0;
        for(auto x:s)
        {
            string k=x;
            sort(k.begin(),k.end());
            vp.push_back(make_pair(x,k));
            cnt.insert(k);
        }
        int n=vp.size();
        vector<vector<string>>v(cnt.size());
        for(auto x:cnt)
        {
            for(int i=0;i<n;i++)
                if(vp[i].second==x)
                    v[j].push_back(vp[i].first);
            ++j;
        }
        return v;

    }
};
