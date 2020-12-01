class Solution {
public:
    vector<string> result;
    void helper(string s, int left, int right, int n)
    {
        if(s.size()==2*n)
        {
            result.push_back(s);
            return;
        }
        
        if(left<n)
            helper(s+'(', left+1, right,n);
        if(right<left)
            helper(s+')', left, right+1,n);
    }
    vector<string> generateParenthesis(int n) {
        
        string s="";
        helper(s, 0, 0, n);
        return result;
   
    }
};
