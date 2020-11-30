class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int result=nums[0], candidates=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            result=max(nums[i], nums[i]+result);
            candidates=max(candidates, result);
        }
        return candidates;
        
    }
};
