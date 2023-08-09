class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& a) {
        int m=0;
        int n=a.size();
        map<int ,int >mp;
        for(int i=0;i<n;i++)
        {
            mp[min(a[i][0],a[i][1])]++;
            m=max(m,min(a[i][0],a[i][1]));
        }
        return mp[m];
    }
};
