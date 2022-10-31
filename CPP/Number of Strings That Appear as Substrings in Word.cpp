class Solution {
public:
    int numOfStrings(vector<string>& v, string word) {
        int cnt=0,n=v.size();
        for(int i=0;i<n;i++)
            if(word.find(v[i])!=string::npos)++cnt;
        return cnt;

    }
};
