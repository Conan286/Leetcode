class Solution {
public:
    int sum(int n)
    {
        int s=0;
        while(n)
        {
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int countLargestGroup(int n) {
        map<int,int>mp;
        set<int>s;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            s.insert(sum(i));
            mp[sum(i)]++;
        }
        for(auto x:s)
            ans=max(ans,mp[x]);
        int cnt=0;
        for(auto x:s)
            if(mp[x]==ans)
                ++cnt;
        return cnt;
    }
};
