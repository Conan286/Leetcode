class Solution {
public:
    char findTheDifference(string s, string t) {
        set<char>se;
        map<char,int>mp;
        for(auto x:s){
            se.insert(x);
            mp[x]++;
        }
        for(auto x:t) {
            if(mp[x]>0) mp[x]--;
                else return x;
        }
        return 'c';
    }
};
