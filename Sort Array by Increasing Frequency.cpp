class Solution {
public:
    vector<int> frequencySort(vector<int>& a) {
        vector<int>v,w;
        set<int>se;
        map<int,int>mp;
        for(auto x:a)
        {
            se.insert(x);
            mp[x]++;
        }
        for(auto x:se)
            w.push_back(x);
        int n=w.size();
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(mp[w[j]] < mp[w[i]]||(mp[w[j]] == mp[w[i]] and w[j]>w[i]))
                    swap(w[i],w[j]);
        for(auto x:w)
            for(int i=0;i<mp[x];i++)
                v.push_back(x);
        return v;
    }
};
