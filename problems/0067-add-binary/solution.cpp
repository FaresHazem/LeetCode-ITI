class Solution {
public:
    string addBinary(string a, string b) {
        if(b.size() > a.size())
        {
            string temp = a;
            a = b;
            b = temp;
        }
        int i = a.size() - 1, j = b.size() - 1, carry = 0;
        
        while (i >= 0 && j >= 0)
        {
            if (carry)
            {
                if (a[i] == b[j] && a[i] == '0')
                {
                    a[i] = '1';
                    carry = 0;
                }
                else if (a[i] == b[j] && a[i] == '1')
                {
                    a[i] = '1';
                    carry = 1;            
                }
                else
                {
                    a[i] = '0';
                    carry = 1;
                }
            }
            else
            {
                if (a[i] == b[j] && a[i] == '1')
                {
                    a[i] = '0';
                    carry = 1;
                }
                else if ((a[i] == '1' && b[j] == '0') || (a[i] == '0' && b[j] == '1'))
                {
                    a[i] = '1';
                }
            }
            i--;
            j--;
        }

        while (carry)
        {
            if (i < 0)
            {
                a.insert(a.begin(), '1');
                break;
            }
            if (a[i] == '1')
            {
                a[i] = '0';
            }
            else if (a[i] == '0')
            {
                a[i] = '1';
                carry = 0;
            }
            i--;
        }

        return a;
    }
};