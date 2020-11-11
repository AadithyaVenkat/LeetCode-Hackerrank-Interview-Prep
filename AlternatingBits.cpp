class Solution {
public:
    bool hasAlternatingBits(int n) {
        
     while(n)
     {
         int firstbit=n&1;
         n=n>>1;
         int secondbit=n&1;
         
         if(firstbit==secondbit)
             return false;
     }
        
    return true;

    }
};
