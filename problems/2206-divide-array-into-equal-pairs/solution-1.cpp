class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> freq;
        int count = 0;

        for (int i: nums)
            freq[i]++;

        for (auto& [key, value]: freq)
        {
            if(value % 2 == 0)
                count += value; 
        }

        return count == nums.size();
    }
};