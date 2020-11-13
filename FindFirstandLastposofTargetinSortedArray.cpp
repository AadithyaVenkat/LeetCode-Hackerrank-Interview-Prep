class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     
        int first=-1, second=-1;
        
        int low=0, high=nums.size()-1;
         if(nums.size()==0)
            return {first, second};
        
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
            
        }
        
        first=high;
        high=nums.size()-1;
        
        while(low<high)
        {
            int mid=low+(high-low)/2+1;
            if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid;
            }
            
        }
        
        second=high;
        
        if(nums[first]==target && nums[second]==target)
            return {first, second};
        else
            return {-1, -1};
        
    }
};
