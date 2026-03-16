class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        bool negative = (dividend < 0) ^ (divisor < 0);

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long dvd = llabs(dividend);
        long long dvs = llabs(divisor);
        long long quotient = 0;

        while (dvd >= dvs)
        {
            // find the largest multiple of dvs (using powers of 2)
            long long temp = dvs;   // start with the divisor
            long long multiple = 1; // how many times we are subtracting

            while (dvd >= (temp << 1))
            {
                temp <<= 1;     // (2 * dvs)
                multiple <<= 1; // (2 * multiple)
            }

            // subtract it from dvd
            dvd -= temp;

            // add the corresponding multiple to quotient
            quotient += multiple;
        }
        return negative ? -quotient : quotient;
    }
};