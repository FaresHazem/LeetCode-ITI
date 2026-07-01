class Solution {
public:
    int scoreOfString(string s) {
        int result = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            result += abs(+s[i] - +s[i+1]);
        }
        return result;
    }
};