class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        stringstream ss1(s1);
        stringstream ss2(s2);
        map<string,int>mp;
        set<string>s;
        vector<string>v;
        string tmp;
        while(ss1>>tmp)
        {
            mp[tmp]++;
            s.insert(tmp);
        }
        while(ss2>>tmp)
        {
            mp[tmp]++;
            s.insert(tmp);
        }
        for(auto x:s)
            if(mp[x]<2)
                v.push_back(x);
        return v;

    }
};
