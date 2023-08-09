class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        int n=v.size();
        for(int i=1;i<n-1;i++)

            if(v[i]!=v[i+1] and v[i]!=v[i-1])
               return v[i];

        return (n>1 and v[n-1]!=v[n-2])?v[n-1]:v[0];
    }
};
