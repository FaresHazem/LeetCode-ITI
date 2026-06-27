class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < (nums.size()*2); i++)
        {
            result.push_back(nums[i % nums.size()]);
        }
        return result;
    }
};