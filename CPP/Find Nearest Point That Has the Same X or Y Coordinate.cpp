class Solution {
public:

    int nearestValidPoint(int x, int y, vector<vector<int>>& p) {

        int ans=INT_MAX;
        for(auto i:p)
            if(i[0]==x or i[1]==y)
             ans=min(ans,((i[0]-x)*(i[0]-x)+(i[1]-y)*(i[1]-y)));
        for(int i=0;i<p.size();i++)
            if((p[i][0]-x)*(p[i][0]-x)+(p[i][1]-y)*(p[i][1]-y)==ans and (p[i][0]==x or p[i][1]==y))
                return i;
        return -1;
    }
};
