class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& a) {
        int n=a.size();

        for(int i=0;i<n;i+=2)
            for(int j=i+2;j<n;j+=2)
                if(a[j]<a[i])
                    swap(a[i],a[j]);
        for(int i=1;i<n;i+=2)
            for(int j=i+2;j<n;j+=2)
                if(a[j]>a[i])
                    swap(a[i],a[j]);
        return a;
    }
};
