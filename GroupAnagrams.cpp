class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        string s; //String to save the sort
        vector<vector<string>> out; // Output vector of strings
        unordered_map<string, vector<string>> u; //Unordered map to store the strings
        
        for(int i=0;i<strs.size();i++)
        {
            s=strs[i]; 
            sort(s.begin(),s.end()); //sort this and push it to the particular index
             u[s].push_back(strs[i]);
        }
        
        for (auto it=u.begin();it!=u.end();it++) {
            out.push_back(it->second);
        }

        return out;
    }
};
