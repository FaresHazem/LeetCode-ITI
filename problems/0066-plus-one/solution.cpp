class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (i == digits.size() - 1)
                digits[i]++;
            if (digits[i] > 9)
            {
                digits[i] = 0;
                if (i-1 < 0)
                    digits.insert(digits.begin(), 1);
                else
                    digits[i-1]++;
                continue;
            }
            break;
        }
        return digits;
    }
};