class Solution {
public:
    string addStrings(string s1, string s2) {
        int n1=s1.size(),n2=s2.size(),tmp=0,n=max(n1,n2);
        int s[n];
        string str;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        if(n1<n){
            int i=n1;
            while(i<n){
                s1+="0";
                i++;
            }
        }
        if(n2<n)
        {
            int i=n2;
            while(i<n){
                s2+="0";
                i++;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            s[i]=(s1[i]-'0'+s2[i]-'0'+tmp)%10;
            tmp=((s1[i]-'0'+s2[i]-'0'+tmp)>9)?1:0;
        }
        s[n-1]=(s1[n-1]-'0')+(s2[n-1]-'0')+tmp;
        reverse(s,s+n);
        for(int i=0;i<n;i++) str+=to_string(s[i]);

        return str;
    }
};
