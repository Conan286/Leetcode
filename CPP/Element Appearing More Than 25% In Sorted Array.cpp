class Solution {
public:
    int findSpecialInteger(vector<int>& a) {
        map<int,int>mp;
        int n=a.size();
        for(auto x:a){
            mp[x]++;
            if(mp[x]>n/4) return x;
    }
        return -1;
    }
};
