class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int result = 0;
        for (int r = 0; r < grid.size(); r++)
        {
            for (int c = 0; c < grid[0].size(); c++)
            {
                if (grid[r][c] == 1)
                {
                    result += 4;
                    if (r > 0                  && grid[r-1][c] == 1)     result -= 1;
                    if (r < grid.size()    - 1 && grid[r+1][c] == 1)     result -= 1;
                    if (c > 0                  && grid[r][c-1] == 1)     result -= 1;
                    if (c < grid[0].size() - 1 && grid[r][c+1] == 1)     result -= 1;
                }
            }
        }
        return result;
    }
};