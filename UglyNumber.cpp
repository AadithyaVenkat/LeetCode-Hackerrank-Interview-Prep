class Solution {
public:
    
    
    long nthUglyNumber(int n) {
        
        vector<long> uglynum(1691, 0);
        uglynum[0]=1;
        if(n==1)
            return 1;
        long ugly, p2=0, p3=0, p5=0;
        
        for(int i=1; i<1690; ++i)
        {    
            ugly=min(min(uglynum[p2]*2, uglynum[p3]*3), uglynum[p5]*5);
            uglynum[i]=ugly;
            if(ugly==uglynum[p2]*2) p2++;
            if(ugly==uglynum[p3]*3) p3++;
            if(ugly==uglynum[p5]*5) p5++;
                  
        }

        return uglynum[n-1];
        
    }
};
