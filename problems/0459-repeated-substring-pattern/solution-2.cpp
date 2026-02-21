class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for (int k = 1; k <= n / 2; k++)
        {
            if (n % k != 0) continue;
            
            bool match = true;

            for (int i = k; i < n; i++) {
                if (s[i] != s[i % k]) {
                    match = false;
                    break;
                }
            }
            if (match) return true;
        }
        return false;
    }
};