class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
     vector<int>e,o,a;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0) e.push_back(nums[i]);
            else o.push_back(nums[i]);
        }
        for(auto x:e) a.push_back(x);
        for(auto x:o) a.push_back(x);
        return a;
    }
};
