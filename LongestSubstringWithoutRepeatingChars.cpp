class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        set<char> s1;
        int n=s.size();
        int maxlen=0;
        int i=0, j=0;
        while(i<n && j<n)
        {
            if(!s1.count(s[j]))
            {
                s1.insert(s[j]);
                maxlen=max(maxlen, j-i+1);
                j++;
            }
            else
            {
                s1.erase(s[i]);
                i++;
            }
        }
        return maxlen;
        
    }
};
