class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> count;
        int result = 0;

        for (char c: s)
        {
            count[c]++;
        }
        bool center = true;
        for(const auto& pair: count)
        {
            if (pair.second % 2 == 0) result += pair.second;
            else
            {
                if (center) 
                {
                    result += pair.second; 
                    center = false;
                }
                else result += pair.second - 1;
            }
        }

        return result;
    }
};