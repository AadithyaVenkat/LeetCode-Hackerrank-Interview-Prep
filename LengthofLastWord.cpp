class Solution {
public:
    int lengthOfLastWord(string s) {
        
        if(s.size()==0 || s == " ")
            return 0;
        
        int end=s.size()-1;
        int length=0;
        
        while(end>=0 && s[end] == ' ')
            end--;
        
        while(end>=0 && s[end] != ' ')
        {
            end--;
            length++;
        }
        
        return length;
        
    }
};
