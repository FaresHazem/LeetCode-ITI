class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for (int i = 0; i < nums.size() - k - 1; i++)
        {
            if (nums[i] == nums[i+1])
            {
                for (int j = i; j < nums.size() - k - 1; j++)
                {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
                k++;
                i--;
            }
        }
        return nums.size() - k;
    }
};