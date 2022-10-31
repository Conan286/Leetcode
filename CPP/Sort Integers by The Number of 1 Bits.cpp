class Solution {
public:
    static int bit(int n)
    {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
    }
    static bool cmp(const int &a,const int &b)
    {
        if(bit(a)!=bit(b)) return bit(a)<bit(b);
        return a<b;
    }
    vector<int> sortByBits(vector<int>& v) {
        std::sort(v.begin(),v.end(),cmp);
        return v;
    }
};
