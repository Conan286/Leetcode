class Solution {
public:


    string frequencySort(string s) {
          map<char,int>mc;
        vector<char>v;
        set<char>se;
        string str;
        for(auto i:s){
            mc[i]++;
            se.insert(i);
        }
            for(auto x:se) v.push_back(x);
        int n=v.size();
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(mc[v[j]]>mc[v[i]])
                    swap(v[i],v[j]);
        for(auto x:v)
            for(int i=0;i<mc[x];i++)
             str+=x;
        return str;
    }
};
