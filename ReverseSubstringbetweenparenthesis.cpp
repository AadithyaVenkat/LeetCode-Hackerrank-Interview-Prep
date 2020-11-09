//using stack
class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<int> st;
        string result;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
                int begin=st.top();
                st.pop();
                reverse(s.begin()+begin+1, s.begin()+i);
            }
        }
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='(' && s[i]!=')')
                result+=s[i];
        }
        
        return result;
        
    }
};
