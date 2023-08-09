class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& a, int key, int k) {
        vector<int>v,id;
        int n=a.size();
        for(int i=0;i<n;i++)
            if(a[i]==key)
                id.push_back(i);
        for(int i=0;i<n;i++)
            for(auto y:id)
                if(abs(y-i)<=k)
                {
                    v.push_back(i);
                    break;
                }
        return v;

    }
};
