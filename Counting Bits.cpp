class Solution {
public:
  int bit( int n)
 {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
    vector<int> countBits(int n) {
    vector<int>v(n+1);
        for(int i=0;i<=n;i++)
            v[i]=bit(i);
        return v;
    }
};
