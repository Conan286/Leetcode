class Solution {
public:
    vector<string> topKFrequent(vector<string>& ws, int k) {


        map<string,int>mp;
        set<string>se;
        vector<string>s,v;
        for(auto tmp:ws) {
            mp[tmp]++;
            se.insert(tmp);
    }
        for(auto x:se) s.push_back(x);
        int n=s.size();
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(mp[s[j]]>mp[s[i]] or (mp[s[i]] == mp[s[j]] and s[i]>s[j]))
                    swap(s[i],s[j]);

        for(int i=0;i<k;i++) v.push_back(s[i]);
        return v;
    }
};
