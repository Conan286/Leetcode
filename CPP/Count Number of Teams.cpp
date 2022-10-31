class Solution {
public:
    int numTeams(vector<int>& a) {
        int cnt=0;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            int ls=0,rs=0;
            int ll=0,rl=0;
            for(int j=0;j<i;j++)
            {
                if(a[j]>a[i])++ll;
                else if(a[j]<a[i])++ls;
            }
            for(int j=i+1;j<n;j++)
            {
                if(a[j]>a[i])++rl;
                else if(a[j]<a[i])++rs;
            }
            cnt+=ls*rl+ll*rs;
    }
        return cnt;
    }
};
