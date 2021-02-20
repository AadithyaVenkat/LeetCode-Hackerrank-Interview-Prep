class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) 
    {
        
        int m=nums.size(), n=nums[0].size();
        if(m==0)
            return 0;
        int left=0, right=m*n-1;
        
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            int element=nums[mid/n][mid%n];
            if(target==element)
                return true;
            else if(target<element)
                right=mid-1;
            else
                left=mid+1;
        }
        
        return false;
        
    }
};
