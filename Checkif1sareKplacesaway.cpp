class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {

        int idx=-1;
        for(int i=0; i<nums.size(); i++)
        {
           if(nums[i])
           {
               if(idx==-1)
                   idx=i;
               else
               {
                   if(i-idx<=k)
                       return false;
                   idx=i;
               }
                   
           }
            
        }
        return true;
    }
};
