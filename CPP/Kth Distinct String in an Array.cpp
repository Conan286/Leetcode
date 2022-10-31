class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        int n,cnt=0;
        vector<string>v;
        for(auto x:arr)
        mp[x]++;
        for(auto x:arr)
         if(mp[x]<2)
             v.push_back(x);
        n=v.size();
        if(k>n) return "";
        return v[k-1];


    }
};
