class Solution {
public:
    bool isPerfectSquare(long num) {
        
        long low=0, high=num;
        while(low<=high)
        {
            long mid=(low+high)/2;
            long val=mid*mid;
            if((val)==num)
                return true;
            else if((val)<num)
                low=mid+1;
            else 
                high=mid-1;
                
        }
        return false;
    }
};
