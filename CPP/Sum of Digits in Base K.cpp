class Solution {
public:
    int sumBase(int n, int k) {
        stack<int>st;
        while(n>0)
        {
            st.push(n%k);
            n/=k;
        }
        int s=0;
        while(!st.empty())
        {
            s+=st.top();
            st.pop();
        }
        return s;
    }
};
