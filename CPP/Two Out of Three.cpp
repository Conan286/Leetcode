class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& n1, vector<int>& n2, vector<int>& n3) {
     vector<int>a;
        int cnt[3][101]={};
        for(auto x:n1)
            cnt[0][x]=1;
        for(auto x:n2)
            cnt[1][x]=1;
        for(auto x:n3)
            cnt[2][x]=1;
        for(int i=0;i<101;i++)
            if(cnt[0][i]+cnt[1][i]+cnt[2][i]>=2)
                a.push_back(i);
        return a;
    }
};
