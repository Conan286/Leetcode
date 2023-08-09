class Solution {
public:
    long long smallestNumber(long long num) {
        long long n=abs(num);
        vector<int>v;
        while(n>0){
            v.push_back(n%10);
            n/=10;
        }
        sort(v.begin(),v.end());
        if(num<=0)
        {
            long long ans=0;
            for(int i=v.size()-1;i>=0;i--)
                ans=ans*10+v[i];
            return -ans;
        }
        int id=upper_bound(v.begin(),v.end(),0)-v.begin();
        long long k=v[id];
        for(int i=0;i<id;i++)k*=10;
        for(int i=id+1;i<v.size();i++)
            k=k*10+v[i];
        return k;
    }
};
