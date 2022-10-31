class Solution {
public:
    int power(int n)
    {
        int cnt=0;
        while(n!=1)
        {
            if(n%2==0) n/=2,++cnt;
            else n=n*3+1,++cnt;
        }
        return cnt;
    }
    static bool cmp(pair<int,int> a,pair<int,int> b)
    {
        if(a.second!=b.second) return a.second<b.second;
        return a.first<b.first;
    }
    int getKth(int a, int b, int k) {
        vector<pair<int,int>>vp;
        for(int i=a;i<=b;i++)
            vp.push_back(make_pair(i,power(i)));
        sort(vp.begin(),vp.end(),cmp);
        return vp[k-1].first;
    }
};
