class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int best = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    int sum = nums[i] + nums[j] + nums[k];
                    if (abs(sum - target) < abs(best - target))
                        best = sum;
                }
            }
        }
        return best;
    }
};