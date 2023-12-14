class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> rows(grid.size(), 0), cols(grid[0].size(), 0); 
        int cnt;
        for(int i = 0; i < grid.size(); i++)
        {
             cnt = 0;
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] == 1) cnt++;
            }
            rows[i] = cnt;
        }
        for(int i = 0; i < grid[0].size(); i++)
        {
            cnt = 0;
            for(int j = 0; j < grid.size(); j++)
            {
                if(grid[j][i] == 1) cnt++;
            }
            cols[i] = cnt;
        }
        vector<vector<int>>diff(grid.size(), vector<int>(grid[0].size(), 0));
        for(int i = 0; i < diff.size(); i++)
        {
            for(int j = 0; j < diff[0].size(); j++)
            {
                diff[i][j] = rows[i] + cols[j] - (grid.size() - rows[i]) - (grid[0].size() - cols[j]);
            }
        }
        return diff;
    }
};