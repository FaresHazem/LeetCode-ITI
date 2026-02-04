class Solution {
public:
    string toHex(int num) {
        string str;
        unsigned int n = num;
        if(num == 0) return "0";
        while(n != 0)
        {
            int rem = n % 16;
            char ch;
            if(rem < 10)
                ch = rem + '0';
            else 
                ch = rem - 10 + 'a';
            str.insert(str.begin(), ch);
            n /= 16;
        }
        return str;
    }
};