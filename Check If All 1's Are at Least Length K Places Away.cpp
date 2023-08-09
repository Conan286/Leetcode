class Solution {
public:
    bool kLengthApart(vector<int>& v, int k) {
        int n=v.size(),id=0;
        for(int i=0;i<n;i++)
            if(v[i])
            {
                id=i;
                break;
            }
         int vt=id;
        for(int i=vt+1;i<n;i++)
        {
            if(v[i])
            {
                if(i-id-1<k) return 0;
                id=i;
            }
        }
        return 1;
    }
};
