class Solution {
public:
    
    void backtracking(vector<int> candidates, vector<int> temp, vector<vector<int>>& result, int target, int i)
    {
        if(target<0)
            return;
        
        if(target==0)
        {
            result.push_back(temp);
            return;
        }
        
        for(int j=i; j<candidates.size(); j++)
        {
            temp.push_back(candidates[j]);
            backtracking(candidates, temp, result, target-candidates[j], j);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> temp;
        vector<vector<int>> result;
        backtracking(candidates, temp, result, target, 0);
        return result;
        
    }
};
