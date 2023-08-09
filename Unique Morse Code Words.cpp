class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& w) {
        map<char,string> morse{
            {'a',".-"},
            {'b',"-..."},
            {'c',"-.-."},
            {'d',"-.."},
            {'e',"."},
            {'f',"..-."},
            {'g',"--."},
            {'h',"...."},
            {'i',".."},
            {'j',".---"},
            {'k',"-.-"},
            {'l',".-.."},
            {'m',"--"},
            {'n',"-."},
            {'o',"---"},
            {'p',".--."},
            {'q',"--.-"},
            {'r',".-."},
            {'s',"..."},
            {'t',"-"},
            {'u',"..-"},
            {'v',"...-"},
            {'w',".--"},
            {'x',"-..-"},
            {'y',"-.--"},
            {'z',"--.."}
        };
        set<string>se;
        int n=w.size();
        for(int i=0;i<n;i++)
        {
            string a="";
            for(int j=0;j<w[i].size();j++)a+=morse[w[i][j]];
            se.insert(a);
        }
        return se.size();
    }
};
