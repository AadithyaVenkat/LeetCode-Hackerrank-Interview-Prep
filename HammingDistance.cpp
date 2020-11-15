class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int xr=0; int cnt=0;
        
        xr=x^y;
        
        while(xr)
        {
            xr&=(xr-1);
            cnt++;
        }
        return cnt;
        
    }
};
