class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int n=s.length(),cnt=0,m=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') {
                st.push(s[i]);
                cnt++;
                m=max(m,cnt);
        }
            else if(s[i]==')') {
                cnt--;
                st.pop();
            }
    }
    return m;
    }
};
