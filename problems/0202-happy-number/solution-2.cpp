class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visited;
        while(true)
        {
            if(n == 1) return true;
            if(visited.count(n)) return false;

            visited.insert(n);

            int sum = 0;
            while (n > 0)
            {
                int digit = n % 10;
                sum += digit * digit;
                n = n / 10; 
            }
            n = sum;
        }
    }
};