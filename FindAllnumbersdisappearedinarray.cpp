class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
       int n=nums.size();
         
       vector<int> ans(n+1,0);
       for(int i=0;i<n;i++)
       {
           ans[nums[i]]=1;
       }
        
     
        
       nums.clear();

       for(int i=0;i<=n;i++)
       {
           if(ans[i]==0 && i!=0)
               nums.push_back(i);
       }
       
        return nums;
        
    }
};
