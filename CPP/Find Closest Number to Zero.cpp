class Solution {
public:
    int findClosestNumber(vector<int>& a) {
        int n=a.size(),m=abs(a[0]);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
            if(abs(a[i])<m) m=abs(a[i]);
        }
        if(mp[m]) return m;
        return -m;
    }
};
