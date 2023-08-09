class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
          map<int,int>mp;
        for(auto x:arr)
            mp[x]++;
        int check=0;
        for(auto x:arr)
            if(mp[2*x] and x!=0 or(x==0 and mp[x]>1))
            {
                check=1;
                break;
            }
        return check;
    }
};
