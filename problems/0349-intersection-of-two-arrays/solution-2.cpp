class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set(nums1.begin(), nums1.end());
        unordered_set<int> result;

        for (int i : nums2) 
            if (set.erase(i))
                result.insert(i);

        return vector<int>(result.begin(), result.end());
    }
};