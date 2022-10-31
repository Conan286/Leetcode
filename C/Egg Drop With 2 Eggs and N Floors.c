class Solution {
public:
    int twoEggDrop(int n)
	 {
        int cnt=1;
   while(n-cnt>0)
   {
    n-=cnt++;
   }
      return cnt>n?cnt:n;
    }
};
