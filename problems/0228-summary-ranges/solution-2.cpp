class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        if (nums.size() == 0) return result;

        int start = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (i == nums.size() - 1 || nums[i + 1] != nums[i] + 1) {
                if (start == nums[i])
                    result.push_back(to_string(start));
                else
                    result.push_back(to_string(start) + "->" + to_string(nums[i]));
                
                if (i < nums.size() - 1) start = nums[i + 1];
            }
        }

        return result;
    }
};