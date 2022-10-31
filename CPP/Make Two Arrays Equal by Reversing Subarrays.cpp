class Solution {
public:
    bool canBeEqual(vector<int>& t, vector<int>& a) {
        map<int,int>mp;
        int n=t.size();
        for(int i=0;i<n;i++)
        {
            mp[t[i]]++;
            mp[a[i]]--;
        }
        for(auto x:a)
            if(mp[x]!=0)
              return 0;
        return 1;
    }
};
