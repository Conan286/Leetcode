class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n=v.size(),i=n-1,tmp=0;
        if(v[0]==9&&n==1) { v[0]=1; v.insert(v.begin()+1,0); return v; }
        if(v[i]+1>=10) v[i--]=0,tmp=1;
        while(v[i]+tmp>=10&&i>0)
        {
            v[i--]=0;
            }
        v[i]+=1;
        if(v[i]>9) {
            v[i]=0;
        v.insert(v.begin(),1);
        }
        return v;
    }
};
