class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freq;
        int max_odd = 0, min_even = INT_MAX;

        for (char c : s) 
        {
            freq[c]++;
        }

        for (const auto& pair : freq) 
        {
            if (pair.second % 2 == 0 && pair.second < min_even)
                min_even = pair.second;
            else if (pair.second % 2 == 1 && pair.second > max_odd)
                max_odd = pair.second;
        }
        
        return max_odd - min_even;
    }
};