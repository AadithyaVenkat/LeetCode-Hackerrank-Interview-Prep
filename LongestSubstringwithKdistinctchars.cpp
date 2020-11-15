class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        
        int len=0;
        int j=0, i=0;
        
        unordered_map<char, int> mp;
        
        while(j<s.size())
        {
            if(mp.size()<=k)
            {
                mp[s[j]]++;
                j++;
            }
            if(mp.size()>k)
            {
                mp[s[i]]--;
                if(mp[s[i]]==0)
                    mp.erase(s[i]);
                i++;
            }
            len=max(len,j-i);
        }
        
        return len;
        
    }
};
