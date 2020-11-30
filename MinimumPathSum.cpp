class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
         int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> state(m, vector<int>(n, 0));
        state[0][0] = grid[0][0];
        for (int i = 1; i < n; i ++) {
            state[0][i] = grid[0][i] + state[0][i - 1];
        }
        for (int j = 1; j < m; j ++) {
            state[j][0] = grid[j][0] + state[j - 1][0];
        }
        for (int i = 1; i < m; i ++) {
            for (int j = 1; j < n; j ++) {
                state[i][j] = grid[i][j] + min(state[i - 1][j], state[i][j - 1]);
            }
        }
        return state[m - 1][n - 1];
        
    }
};
