class Solution {
public:
    int busyStudent(vector<int>& st, vector<int>& en, int q) {
    int n=st.size(),cnt=0;
    for(int i=0;i<n;i++)
        if(st[i]<=q&&en[i]>=q)++cnt;
    return cnt;
    }
};
