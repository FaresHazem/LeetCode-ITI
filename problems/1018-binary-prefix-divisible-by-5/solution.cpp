class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> x(nums.size());
        int rem = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            rem = (rem * 2 + nums[i]) % 5;
            x[i] = (rem == 0);
        }
        
        return x;
    }
};