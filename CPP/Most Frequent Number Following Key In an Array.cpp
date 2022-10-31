class Solution {
public:
    int mostFrequent(vector<int>& a, int key) {
       int n=a.size();
        set<int>s;
        map<int,int>mp;
        for(int i=0;i<n-1;i++)
            if(a[i]==key){
                ++mp[a[i+1]];
                s.insert(a[i+1]);
            }
        int ans=0,res=0;
        for(auto x:s)
            if(mp[x]>res)
                ans=x,res=mp[x];
        return ans;

    }
};
