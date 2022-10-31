class Solution {
public:
    vector<string> findWords(vector<string>& s) {
        string s1="qwertyuiop",s2="asdfghjkl",s3="zxcvbnm";
        map<char,int>mp;
        vector<string>v;
        for(auto x:s1) mp[x]=1;
        for(auto x:s2) mp[x]=2;
        for(auto x:s3) mp[x]=3;
        for(auto x:s)
        {
            string y=x;
            transform(x.begin(), x.end(), x.begin(), ::tolower);
            int check=1,n=x.size() ,k=mp[x[0]];
            for(int i=1;i<n;i++)
                if(mp[x[i]]!=k)
                {
                    check=0;
                    break;
                }
            if(check) v.push_back(y);
        }
        return v;
    }
};
