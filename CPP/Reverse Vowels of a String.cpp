class Solution {
public:
    bool vowels(char c)
    {
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='O'||c=='I'||c=='U');
    }
    string reverseVowels(string s) {
        int l=0,r=s.length()-1,n=s.length();
        while(l<r)
        {
            while(l<n and !vowels(s[l]))l++;
            while(r>=0 and !vowels(s[r]))r--;
            if(l<r) swap(s[l++],s[r--]);
        }
        return s;
    }
};
