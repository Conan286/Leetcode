class Solution {
public:
    bool canConstruct(string a, string b) {
        map<char,int>mp;
        for(auto i:b)mp[i]++;
        for(auto i:a){
            if(!mp[i]) return 0;
            mp[i]--;
        }
        return 1;
    }
};
