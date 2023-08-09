class Solution {
public:
    static bool cmp(string &a,string &b)
    {
        int n1=a.size(),n2=b.size();
        if(n1!=n2) return n1<n2;
        return a<b;
    }
    string kthLargestNumber(vector<string>& a, int k) {
        int n=a.size();
        sort(a.begin(),a.end(),cmp);
        return a[n-k];
    }
};
