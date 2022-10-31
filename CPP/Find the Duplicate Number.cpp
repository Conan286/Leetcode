class Solution {
public:
    int findDuplicate(vector<int>& a) {
     map<int,int>mp;
        for(auto x:a)
        {
            mp[x]++;
            if(mp[x]>1) return x;
        }
            return -1;
    }
};
