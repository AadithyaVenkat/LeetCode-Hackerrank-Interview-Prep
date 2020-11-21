//Expand from around the center 
// Time Complexity - o(n2)
class Solution {
public:
    int expand(string s, int i, int j)
    {
        int L=i, R=j;
        while(L>=0 && R<s.size() && s[L]==s[R])
        {
            R++;
            L--;
            
        }
        
        return R-L-1; 
    }
    string longestPalindrome(string s) {
        
        int len1=0, len2=0, len=0;
        int start=0, end=0;
        for(int i=0; i<s.size(); i++)
        {
            int len1=expand(s, i, i);
            int len2=expand(s, i, i+1);
            len=max(len1, len2);
            if(len>end-start)
            {
                start=i-(len-1)/2;
                end=i+len/2;
            }
            
        }
        
         return string(&s[start], &s[end+1]);
        
    }
};
