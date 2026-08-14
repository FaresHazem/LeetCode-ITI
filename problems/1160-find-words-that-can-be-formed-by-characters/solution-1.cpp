class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<int, int> freq;
        for (char c: chars)
            freq[c]++;
        
        int result = 0;
        for (string s: words)
        {
            unordered_map<int, int> target;
            for (char c: s)
                target[c]++; 
            bool word = true;
            for (const auto& [key, value]: target)
            {
                if (freq[key] < value)
                {
                    word = false;
                    break;
                }
            }
            if (word) 
                result += s.size();
        }
        return result;
    }
};