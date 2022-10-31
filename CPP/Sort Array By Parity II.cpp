class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& v) {

        int n=v.size();
        vector<int>e;
        vector<int>o;
        for(auto x:v){
            if(x%2==0)
                e.push_back(x);
             else o.push_back(x);
        }
        int j=0,k=0;
        for(int i=0;i<n;i+=2)
            v[i]=e[j++];
        for(int i=1;i<n;i+=2)
            v[i]=o[k++];
        return v;

    }
};
