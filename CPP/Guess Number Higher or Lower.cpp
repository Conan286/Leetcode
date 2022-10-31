/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * lon guess(int num);
 */

class Solution {
public:
  long long binary(long long i,long long j)
  {
    if(i<=j){
    long long mid=(i+j)/2;
    if(guess(mid)==0) return mid;
    else if(guess(mid)==-1) return binary(i,mid-1);
    else return binary(mid+1,j);
    }
    return -1;
  }
    long long guessNumber(long long n) {
    return binary(1,n);
    }
};
