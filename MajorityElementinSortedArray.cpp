class Solution {
public:
    bool isMajorityElement(vector<int>& nums, int target) {
        
        int first=-1, second=-1;
        int low=0, high=nums.size()-1;
        while(low<high)
        {
            int mid=low+(high-low)/2;
                
            if(nums[mid]<target)
                low=mid+1;
            else
                high=mid;
        }
        
        first=low;
        
        high=nums.size()-1;
        while(low<high)
        {
            int mid=low+(high-low)/2+1;
                
            if(nums[mid]>target)
                high=mid-1;
            else
                low=mid;
        }
        
        second=high;
        
        if(nums[second]!=target || nums[first]!=target)
            return false;
        else
            return (second-first+1>nums.size()/2);
        
    }
};
