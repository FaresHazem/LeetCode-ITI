class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(128, -1);
        int min = 0, longest = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (lastSeen[s[i]] >= min)
            {
                min = lastSeen[s[i]] + 1;
            }
            longest = max(longest, (i - min + 1));
            lastSeen[s[i]] = i;
        }
        return longest;
    }
};