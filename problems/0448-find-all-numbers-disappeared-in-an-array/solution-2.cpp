class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> numbers;
        vector<int> result;

        for (int i: nums)
        {
            numbers.insert(i);
        }

        for (int i = 1; i <= nums.size(); i++)
        {
            if (numbers.count(i) == 0)
                result.push_back(i);
        }

        return result;
    }
};