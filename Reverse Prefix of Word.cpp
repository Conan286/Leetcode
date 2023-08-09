class Solution {
public:
    string reversePrefix(string word, char ch) {
        int id=0,n=word.size();
        for(int i=0;i<n;i++)
            if(word[i]==ch)
            {
                id=i;
                break;
            }
        reverse(word.begin(),word.begin()+1+id);
        return word;
    }
};
