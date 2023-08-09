class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size(),n=mat[0].size();
        vector<pair<int,int>>v;
        vector<int>id;
        for(int i=0;i<m;i++)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
                if(mat[i][j])
                    ++cnt;
            v.push_back(make_pair(i,cnt));
        }
        for(int i=0;i<m;i++)
            for(int j=i+1;j<m;j++)
                if(v[j].second<v[i].second or (v[j].second==v[i].second and v[j].first<v[i].first) )
                      swap(v[i],v[j]);
                        for(int i=0;i<k;++i) id.push_back(v[i].first);
        return id;

    }
};
