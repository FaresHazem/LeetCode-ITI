class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> count;
        vector<int> result;

        for (int i: nums1) count[i]++;
        
        for (int i: nums2)
        {
            if (count[i] > 0)
            {
                result.push_back(i);
                count[i]--;
            }
        }
        return result;
    }
};