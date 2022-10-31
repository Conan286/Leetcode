class Solution {
public:
    int sumOfUnique(vector<int>& a) {
        int sum=0;
        map<int,int>mp;
        for(auto x:a) mp[x]++;
        for(auto x:a) if(mp[x]<2) sum+=x;
        return sum;
    }
};
