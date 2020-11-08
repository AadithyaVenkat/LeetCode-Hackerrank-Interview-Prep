class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        int ans=0;
		int count[61]={0};        
		
        for(int i=0; i<time.size(); i++)
        {
            int mod=time[i]%60;
            ans+=count[(60-mod)%60];
            count[mod]++;
        }
        return ans;
    
    }
};
