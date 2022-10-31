class Solution {
public:
    int numWaterBottles(int a, int b) {
        return (a<b)?a:(a-a%b+numWaterBottles(((a%b==0)?(a/b):(a/b + a%b)),b));
    }
};
