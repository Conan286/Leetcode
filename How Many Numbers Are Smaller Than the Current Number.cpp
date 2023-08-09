class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& v) {
     map<int,int>mp;
        vector<int>vi;
        //[8,1,2,2,3]
        //1  1 2 2 1
        // 5 1 3 3 4
        int n=v.size();
        for(int i=0;i<v.size();i++) mp[v[i]]++;
        for(int i=1;i<101;i++) mp[i]+=mp[i-1];
        for(int i=0;i<n;i++)
        {
          if(v[i]==0) vi.push_back(0);
            else vi.push_back(mp[v[i]-1]);
        }
        return vi;
    }
    };
