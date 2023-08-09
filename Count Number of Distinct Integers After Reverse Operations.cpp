class Solution {
public:
    int countDistinctIntegers(vector<int>& v) {
        vector<int>a;
        set<int>s;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            s.insert(v[i]);
            int k=0;
            while(v[i]>0) k=k*10+v[i]%10,v[i]/=10;
            s.insert(k);
        }
        return s.size();
    }
};
