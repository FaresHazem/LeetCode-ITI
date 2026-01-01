class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        int count = 0;
        while (!columnTitle.empty())
        {
            char c = columnTitle.back();
            columnTitle.pop_back();
            ans += ((c - 'A') + 1) * pow(26,count);
            count++;
        }
        return ans;
    }
};