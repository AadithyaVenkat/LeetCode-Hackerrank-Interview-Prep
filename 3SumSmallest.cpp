class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            int low=i+1, high=nums.size()-1;
            while(low<high)
            {
                if(nums[i]+nums[low]+nums[high]<target)
                {
                    sum+=high-low;
                    low++;
                }
                else 
                    high--;
            }
        }
        return sum;
        
    }
};
