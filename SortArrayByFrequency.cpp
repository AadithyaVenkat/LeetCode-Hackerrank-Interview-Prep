class Solution {
public:
    static bool mycmp(pair<int, int> &a, pair<int, int> &b)
    {
        return(a.second<b.second || a.second==b.second && a.first>b.first);
    }
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        
        vector<pair <int, int>> h;
        
        for(auto itr:mp)
        {
            h.push_back(itr);
        }
        sort(h.begin(), h.end(), mycmp);
        
        vector<int> ans;
        for(int i=0; i<h.size(); i++)
        {
            while(h[i].second--)
                ans.push_back(h[i].first);
        }
        return ans;
        
    }
};
