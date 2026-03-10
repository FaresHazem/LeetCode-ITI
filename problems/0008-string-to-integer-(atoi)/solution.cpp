class Solution {
  public:
    int myAtoi(string s) {
        int i = 0, sign = 1, num = 0;

        while (i < s.size() && s[i] == ' ')
            i++;

        if (s[i] == '-' || s[i] == '+') {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        while (i < s.size() &&
               isdigit(s[i])) // while (i < s.size() && (s[i] - '0') <= 9 && (s[i] - '0') >= 0)
        {
            int digit = s[i] - '0';

            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 7))
                return (sign == 1 ? INT_MAX : INT_MIN);

            num = num * 10 + digit;
            i++;
        }
        return sign * num;
    }
};