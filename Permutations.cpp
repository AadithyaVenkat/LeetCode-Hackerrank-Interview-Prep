class Solution {
public:
    
    vector<vector<int>> result;
    
    void helper(vector<int> nums, int low, int high)
    {
        if(low==high)
        {
            result.push_back(nums);
        }
        
        for(int i=low; i<=high; i++)
        {
            swap(nums[low], nums[i]);
            helper(nums, low+1, high);
            swap(nums[low], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        helper(nums, 0, nums.size()-1);
        return result;
        
    }
};
