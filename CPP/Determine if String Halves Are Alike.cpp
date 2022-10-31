class Solution {
public:
bool isVowel(char func)
{

  if(func =='a')
           return 1;
  if(func =='e')
           return 1;
  if(func =='i')
           return 1;
  if(func =='o')
           return 1;
  if(func =='u')
           return 1;
  if(func =='A')
           return 1;
  if(func =='E')
           return 1;
  if(func =='I')
           return 1;
  if(func =='O')
           return 1;
  if(func =='U')
           return 1;
  else
          return 0;
}
    bool halvesAreAlike(string s) {
        int n=s.size(),cnt1=0,cnt2=0;
        for(int i=0;i<n/2;i++)
            if(isVowel(s[i]))
                ++cnt1;
        for(int i=n/2;i<n;i++)
            if(isVowel(s[i]))
                ++cnt2;
        return (cnt1==cnt2);

    }
};
