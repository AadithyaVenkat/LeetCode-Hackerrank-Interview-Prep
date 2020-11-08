class Solution {
public:
    bool isPalindrome(string s) {
        
        int l=0, r=s.length()-1;
        
        while(l<r)
        {
            while(l < r and !isalnum(s[l])) l++;  //toskip unneccsary spaces and colon
    
            while(r > l and !isalnum(s[r])) r--;  //toskip unneccsary spaces and colon
            
            if((tolower(s[l++]))!=(tolower(s[r--]))) return false; 
        }
        return true;
        
    }
};
