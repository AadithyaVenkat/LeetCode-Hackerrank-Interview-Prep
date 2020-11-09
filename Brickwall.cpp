class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        
        unordered_map<int, int> count;
        int size=0;
        for(int i=0; i<wall.size(); i++)
        {
            int sum=0;
            for(int j=0; j<wall[i].size()-1; j++)
            {
                sum+=wall[i][j];
                count[sum]++;
            }
        }
        for(auto it=count.begin(); it!=count.end(); it++)
            size=max(size, it->second);
        
        return wall.size()-size;
        
    }
};
