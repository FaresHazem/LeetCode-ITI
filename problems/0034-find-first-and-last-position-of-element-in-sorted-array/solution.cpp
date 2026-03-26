class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int first = -1, last = -1;
        int left = 0, right = nums.size() - 1, mid;

        while (left <= right)
        {
            mid = left + (right - left) / 2;

            if (nums[mid] == target)
                first = mid;

            if (nums[mid] >= target)
                right = mid - 1;
            else
                left = mid + 1;
        }

        left = 0;
        right = nums.size() - 1;
        while (left <= right)
        {
            mid = left + (right - left) / 2;

            if (nums[mid] == target)
                last = mid;

            if (nums[mid] <= target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return {first, last};
    }
};