class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=set<int>(nums.begin(),nums.end()).size()-(count(nums.begin(),nums.end(),0)>0);
        return ans;
    }
};
