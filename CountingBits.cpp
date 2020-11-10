class Solution {
public:
    
    int countset(int num)
    {
        int knt=0;
        while(num)
        {
            num=num&(num-1);
            knt++;
        }
        return knt;
    }
    vector<int> countBits(int num) {
        
        vector<int> ans(num+1, 0);
        ans[0] = 0;
        for(int i = 1; i <= num; i++) {
            ans[i] = countset(i);
        }
        return ans;
 
       
    }
};
