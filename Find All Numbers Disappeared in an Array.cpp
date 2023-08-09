class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        int n=a.size();
      vector<int>v;
      map<int,int>mp;
     for(int i=0;i<n;i++)
       mp[a[i]]++;
      for(int i=1;i<=n;i++) if(!mp[i]) v.push_back(i);
      return v;
      }
};
