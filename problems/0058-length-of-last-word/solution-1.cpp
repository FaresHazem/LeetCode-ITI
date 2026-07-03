class Solution {
public:
    int lengthOfLastWord(string s) {
        int start = 0, end = 0;
        bool flag = false;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != ' ' && !flag)
            {
                end = i;
                flag = true;
            }
            if (s[i] == ' ' && flag)
            {
                start = i + 1;
                break;
            }
        }
        return end - start + 1;
    }
};