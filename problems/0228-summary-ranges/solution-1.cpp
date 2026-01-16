class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        if (nums.size() == 0) return result;

        int x = nums[0], y = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1] + 1) {
                y = nums[i];
            } 
            else 
            {
                if (x == y)
                    result.push_back(to_string(x));
                else
                    result.push_back(to_string(x) + "->" + to_string(y));

                x = nums[i];
                y = nums[i];
            }
        }
        if (x == y)
            result.push_back(to_string(x));
        else
            result.push_back(to_string(x) + "->" + to_string(y));

        return result;
    }
};