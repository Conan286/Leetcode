class Solution {
public:
    vector<int> searchRange(vector<int>& v, int t) {
    int n=v.size();
    int check=0,l=-1,r=-1;
    for(int i=0;i<n;i++)
        if(v[i]==t)
        {
            l=i;
            check=1;
            break;
        }
    if(!check) return {-1,-1};
      for(int i=n-1;i>=0;i--)
          if(v[i]==t)
        {
            r=i;
            break;
        }
        return {l,r};
    }
};
