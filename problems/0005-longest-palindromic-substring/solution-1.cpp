class Solution {
public:
    string longestPalindrome(string s) {
        string longest;
        for (int i = 0; i < s.size(); i++)
        {
            string odd = expandAroundCenter(s, i, i);
            string even = expandAroundCenter(s, i, i + 1);
            if (longest.size() < odd.size()) longest = odd;
            if (longest.size() < even.size()) longest = even;
        }
        return longest;
    }
    string expandAroundCenter(string &s, int left, int right)
    {
        while (left >= 0 && right < s.size() && s[left] == s[right])
        {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }
};