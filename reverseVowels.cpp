 string reverseVowels(string s) {
        
        stack<int> st;
        string res;
        for(int i=0;i<s.length();i++)
        {          
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                st.push(s[i]);
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                res+=st.top();
                st.pop();
            }
            else
                res+=s[i];         
        }        
        return res;
    
    }
