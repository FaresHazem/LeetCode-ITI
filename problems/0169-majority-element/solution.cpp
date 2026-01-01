class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate, count = 0;
        for (int i: nums)
        {
            if (count == 0) candidate = i;
            if (candidate == i) count++;
            else                count--;
        }
        return candidate;
    }
};