class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maximum = nums[0], current = nums[0];
        for (int i = 0; i < nums.size() - 1; i++) 
        {
            if (nums[i] < nums[i + 1]) 
                current += nums[i + 1];
            else 
                current = nums[i + 1];

            maximum = max(maximum, current);
        }
        return maximum;
    }
};