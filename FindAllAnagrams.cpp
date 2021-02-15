class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int> a(26,0);
        vector<int> b(26,0);
        
        vector<int> res;
        
        if(s.length()<p.length())
            return res;
        
        for(int i=0; i<p.length(); i++)
        {
            a[p[i]-'a']++;
            b[s[i]-'a']++;
        }
        
        if(a==b)
            res.push_back(0);
        
        for(int i=p.length(); i<s.length(); i++)
        {
            b[s[i]-'a']++;
            b[s[i-p.length()]-'a']--;
            if(a==b)
                res.push_back(i-p.length()+1);
                
        }
        
        return res;
            
    }
    
};
