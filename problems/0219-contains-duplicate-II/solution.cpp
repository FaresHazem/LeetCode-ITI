class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        //s.reserve(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            if (!s.insert(nums[i]).second) return true;
            if (s.size() > k) s.erase(nums[i - k]);
        }
        return false;
    }
};