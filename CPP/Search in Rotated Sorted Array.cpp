class Solution {
public:
    int search(vector<int>& v, int target) {
        int n=v.size();
        for(int i=0;i<n;i++)
            if(v[i]==target ) return i;
        return -1;
    }
};
