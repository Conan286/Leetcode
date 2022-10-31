class Solution {
public:
    vector<int> sumZero(int n) {
        int k=n/2;
        vector<int>v;
        while(k>0){
            v.push_back(-k);
            v.push_back(k--);
        }
        if(n%2!=0) v.push_back(0);
        return v;
    }
};
