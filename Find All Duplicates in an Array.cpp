class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        map<int,int>mp;
      vector<int>v;
      int n=a.size();
      set<int>s(a.begin(),a.end());
      for(int i=0;i<n;i++)
        mp[a[i]]++;

      for(auto x:s)
        if(mp[x]==2)
            v.push_back(x);
        return v;
    }
};
