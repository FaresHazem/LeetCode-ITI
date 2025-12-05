class Solution {
public:
    int mySqrt(int x) {
        long left = 0, right = x, mid;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if(mid * mid > x)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return right;
    }
};