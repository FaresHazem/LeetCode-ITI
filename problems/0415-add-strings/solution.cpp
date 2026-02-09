class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
        string result = "";
        while (i >= 0 || j >= 0 || carry > 0)
        {
            int digit1, digit2;
            if (i < 0) digit1 = 0;
            else digit1 = num1[i] - '0';
            if (j < 0) digit2 = 0;
            else digit2 = num2[j] - '0';
            
            int sum = digit1 + digit2 + carry;
            result += char((sum % 10) + '0');
            carry = sum / 10;
            
            i--;
            j--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};