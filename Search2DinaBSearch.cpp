class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) 
    {
        
        for(int i=0;i<nums.size(); i++)
        {
            int low=0, high=nums[i].size()-1;
            while(low<=high)
            {
                int mid = (low+high)/2;
                if(nums[i][mid]==target)
                    return true;
                else if(nums[i][mid]>target)
                    high=mid-1;
                else
                    low=mid+1;
            }
        }
        
        return false;
        
    }
};
