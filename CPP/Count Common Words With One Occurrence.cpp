class Solution {
public:
    int countWords(vector<string>& w1, vector<string>& w2) {
        map<string,int>mp1,mp2;
        set<string>s1,s2;
        for(auto x:w1)
            mp1[x]++;
        for(auto x:w2)
            mp2[x]++;
         for(auto x:w1)
            if(mp1[x]<2)
                s1.insert(x);
        for(auto x:w2)
            if(mp2[x]<2)
                s2.insert(x);
        int cnt=0;
        for(auto x:s1)
            if(s2.find(x)!=s2.end())
                ++cnt;
        return cnt;
    }
};
