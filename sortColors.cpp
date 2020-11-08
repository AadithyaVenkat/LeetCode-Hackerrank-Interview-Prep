class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int r=0, b=0, w=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==2)
                b++;
            if(nums[i]==1)
                w++;
            if(nums[i]==0)
                r++;
        }
         int i=0;
        while(i>=0 && r)
        {
            nums[i++]=0;
            r--;
        }
         while(i>=0 && w)
        {
            nums[i++]=1;
            w--;
        }
         while(i>=0 && b)
        {
            nums[i++]=2;
            b--;
        }
        
      
    }
};
