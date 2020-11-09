class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        int i=0;
        char c;
        while(i<s.length())
        {
            if(s[i]=='{'||s[i]== '('||s[i] =='[')
            {
                st.push(s[i++]);
            }
            else
            {
                if(st.empty()) return false;
                c=st.top();
                st.pop();
                if(c=='(' && s[i++]!=')') return false;
                if(c=='[' && s[i++]!=']') return false;
                if(c=='{' && s[i++]!='}') return false;
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};
