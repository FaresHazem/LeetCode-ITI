class Solution {
public:
    bool isPerfectSquare(int num) {
        long long start = 0, mid, end = num; 
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (mid * mid == num) return mid;
            else if (mid * mid < num) start = mid + 1;
            else                    end   = mid - 1;
        }
        return false;
    }
};