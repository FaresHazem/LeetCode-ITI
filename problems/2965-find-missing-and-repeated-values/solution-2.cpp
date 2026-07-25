class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> map;
        int n = grid.size();
        int repeated = -1, missing = -1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                map[grid[i][j]]++;
        }

        for (int i = 1; i <= n*n; i++)
        {
            if (!map.count(i)) 
                missing = i;  
            else if (map[i] == 2) 
                repeated = i;  
        }

        return {repeated, missing};
    }
};