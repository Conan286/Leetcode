class Solution {
public:
    string convertToBase7(int num) {
        int n=abs(num);
        if(n==0) return "0";
        stack<char>st;
        while(n>0)
        {
            char c=(n%7)+'0';
            st.push(c);
            n/=7;
        }
        string s=(num>=0)?"":"-";
        while(!st.empty())
        {
            s+=st.top();
            st.pop();

        }
        return s;
    }
};
