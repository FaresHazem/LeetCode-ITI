class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current_length = 0, max_length = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                current_length++;
            else
                current_length = 0;

            max_length = max(max_length, current_length);
        }

        return max_length;
    }
};