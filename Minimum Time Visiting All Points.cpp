class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& s) {
        int min=0,n=s.size();
        for(int i=1;i<n;i++)
          min+=max(abs(s[i][0]-s[i-1][0]),abs(s[i][1]-s[i-1][1]));
        return min;
    }
};
