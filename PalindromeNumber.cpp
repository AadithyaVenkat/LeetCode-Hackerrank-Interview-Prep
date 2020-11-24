class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)
            return false;
        if(x==0)
            return true;

        unsigned int y=0; int num=x;
        while(x)
        {
            int rem=x%10;
            y=y*10+rem;
            x/=10;
            
        }
        
        if(num==y)
            return true;
        else
            return false;
        
    }
};
