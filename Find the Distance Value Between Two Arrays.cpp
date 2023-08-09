class Solution {
public:
    int findTheDistanceValue(vector<int>& a1, vector<int>& a2, int d) {
        int m=a1.size(),n=a2.size(),cnt=0;
        for(int i=0;i<m;i++)
        {
            bool check=false;
            for(int j=0;j<n;j++)
                if( abs(a1[i]-a2[j])<=d){
                    check=true;
                    break;
                }
            if(check)++cnt;
        }
        return m-cnt;
    }
};
