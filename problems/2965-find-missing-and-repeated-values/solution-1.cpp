class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> map;
        int n = grid.size();
        int repeated, missing;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                map[grid[i][j]]++;
        }

        for (const auto& [key, value] : map) 
        {
            if (value > 1)
            {
                repeated = key;
                break;
            }
        }

        for (int i = 1; i <= n*n; i++)
        {
            if (map.find(i) == map.end())
                missing = i;
        }

        return {repeated, missing};
    }
};