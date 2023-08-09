class Solution {
public:
   bool isValid(string s) {
        stack<char>st;
        int n=s.length();

        for(auto x:s)
        {
         if(x=='(' or x=='{' or  x=='[')   st.push(x);
         else {
            if (st.size()==0 or (x != '}' and st.top() == '{') or (x != ']' and st.top() == '[') or (x != ')' and st.top() == '(')  ) return false;
             //if(st.empty() or (st.top()=='(' and i!=')') or (st.top()=='{' and i!='}') or (st.top()=='[' and i!=']')) return false;

                     st.pop();
         }
        }

        return st.size()==0;
    }
};
