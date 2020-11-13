class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {
        
        int j=-1, k=-1, mindistance=INT_MAX;
        for(int i=0; i<words.size(); i++)
        {
            if(words[i]==word1)
            {
                j=i;
            }
            else if(words[i]==word2)
            {
                k=i;
            }
            if(k!=-1 && j!=-1)
                mindistance=min(mindistance, abs(k-j));
                
        }
        
        return mindistance;
        
    }
};
