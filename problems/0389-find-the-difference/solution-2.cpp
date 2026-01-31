class Solution {
public:
    char findTheDifference(string s, string t) {
        int count[26] = {0};

        for (char c : s) count[c - 'a']++;
        for (char c : t) count[c - 'a']--;

        for (char c : t) {
            if (count[c - 'a'] == -1)
                return c;
        }

        return '\0';
    }
};