class Solution {
public:
    int canBeTypedWords(string text, string broken) {
        int cnt=0;
        string tmp;
        stringstream ss(text);
        vector<string >v;
        while(ss>>tmp) v.push_back(tmp);
        for(int i=0;i<v.size();i++){
            int check=1;
            for(char s:broken)
                for(char j:v[i])
                    if(s==j){
                    check=0;
                break;
                    }
            if(check==1)
                ++cnt;
        }
        return cnt;
    }
};
