class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = nums.size() - 1, i = 0;

        while (i <= index)
        {
            if(nums[i] == val)
            {
                nums[i] = nums[index];
                index--;
            }
            else i++;
        }
    return index + 1;
    }
};