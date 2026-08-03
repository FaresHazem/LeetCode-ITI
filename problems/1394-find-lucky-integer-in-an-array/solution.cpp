class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;
        int max = -1;

        for (int i: arr)
            freq[i]++;

        for (const auto& [key, value] : freq) 
            if (key == value && key > max)
                max = key;

        return max;
    }
};