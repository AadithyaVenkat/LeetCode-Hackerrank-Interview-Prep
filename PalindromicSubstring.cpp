class Solution {
public:
    int expand(string s, int i, int j)
    {
        int ans=0;
        int R=i, L=j;
        while(L<=s.size() && R>=0 && s[L]==s[R])
        {
            L++;
            R--;
            ans++;
            
        }
        return ans;
    }
    int countSubstrings(string s) {
        
        int cnt1=0, cnt2=0;
        for(int i=0;i <s.size();i++)
        {
            cnt1+=expand(s, i, i);
            cnt2+=expand(s, i,i+1);
        }
        
        return cnt1+cnt2;
        
    }
};
