class Solution {
public:
    vector<int> rearrangeArray(vector<int>& v) {
        int n=v.size();
        vector<int> a(n);
        int i=0,j=1;
        for(auto x:v)
        {
            if(x>0)
            {
               a[i]=x;
                i+=2;
            }
            else{
                a[j]=x;
                j+=2;
            }
        }
        return a;

    }
};
