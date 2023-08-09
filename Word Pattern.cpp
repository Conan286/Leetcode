class Solution {
public:
    bool wordPattern(string str, string s) {
        vector<string>v;
        string tmp;
        map<char,int>mc;
        map<string,int>ms;
        mc.clear();
        ms.clear();
        stringstream ss(s);
        while(ss>>tmp)
        {
            v.push_back(tmp);
        }
        if(v.size()!=str.size()) return 0;
        int n=v.size();
        for(int i=0;i<n;i++){
            if(mc[str[i]]!=ms[v[i]]) return 0;
            mc[str[i]]=ms[v[i]]=i+1;
    }
        return 1;
    }
};
