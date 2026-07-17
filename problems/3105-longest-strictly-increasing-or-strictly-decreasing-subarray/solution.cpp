class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int incLength = 1, decLength = 1, maxLength = 1;
        bool increasing = true;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] < nums[i+1])
            {
                incLength++;
                decLength = 1;
            }
            else if (nums[i] > nums[i+1])
            {
                decLength++;
                incLength = 1;
            }
            else
            {
                incLength = 1;
                decLength = 1;
            }
            maxLength = max(maxLength, max(incLength, decLength));
        }
        return maxLength;
    }
};