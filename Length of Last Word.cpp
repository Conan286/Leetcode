class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        int i=s.length()-1;
        while(!isalpha(s[i])) i--;
        while(i>=0 and isalpha(s[i--])) ++cnt;
        return cnt;
    }
};
