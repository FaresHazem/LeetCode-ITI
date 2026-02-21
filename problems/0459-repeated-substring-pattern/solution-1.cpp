class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for (int k = 1; k <= n/2; k++)
        {
            if (n % k == 0) 
            {
                bool match = true;
                string pattern = s.substr(0, k);
                for (int i = 1; i < n/k; i++)
                {
                    string current_chunk = s.substr(i * k, k);
                    if (current_chunk != pattern) 
                    {
                        match = false;
                        break;
                    }
                }
                if (match) return true;
            }

        }
        return false;
    }
};