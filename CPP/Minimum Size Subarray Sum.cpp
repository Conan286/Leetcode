class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(),i=0,j=0,s=0,cnt=n+1;
        while(j<n)
        {
            s+=nums[j++];
            while(s>=target)
            {
                cnt=min(cnt,j-i);
                s-=nums[i++];
            }
        }
        return cnt%(n+1);
    }
};
