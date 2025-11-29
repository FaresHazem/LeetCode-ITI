class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid = nums.size() / 2, start = 0, end = nums.size() - 1;
        while(start <= end)
        {
            mid = (end - start) / 2 + start;

            if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                break;
            }
        }
        if (nums[mid] == target)
            return mid;
        else
            return start;
    }
};