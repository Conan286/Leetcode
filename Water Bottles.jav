class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
      return (numBottles<numExchange)?(numBottles):(numBottles-(numBottles%numExchange)+numWaterBottles(numBottles%numExchange==0?(numBottles/numExchange):(numBottles/numExchange+(numBottles%numExchange)),numExchange));
    }
}
