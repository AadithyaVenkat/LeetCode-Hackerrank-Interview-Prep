class Solution {
public:
    static bool mycmp(pair<string, int> &a ,pair<string, int> &b)
    {
        return(a.second>b.second) || (a.second==b.second && a.first<b.first);
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        vector<string> result;
        unordered_map<string, int> mp;
        
        for(int i=0; i<words.size(); i++)
        {
            mp[words[i]]++;
        }
        
        vector<pair<string, int>> temp(mp.begin(), mp.end());
        
        sort(temp.begin(), temp.end(), mycmp);
        
        for(int i=0; i<k; i++)
        {
            result.push_back(temp[i].first);
        }
        return result;
        
        
    }
    
    
};
