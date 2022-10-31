class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int cnt=1;
        string tmp;
        stringstream ss(sentence);
        int n=searchWord.size();
        while(ss>>tmp)
        {
            tmp=tmp.substr(0,n);
            if(tmp==searchWord) return cnt;
            cnt++;
        }
        return -1;
    }
};
