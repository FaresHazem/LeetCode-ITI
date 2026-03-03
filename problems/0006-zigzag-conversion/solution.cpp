class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        vector<string> rows(numRows);
        int currentRow = 0;
        int direction = 1;
        
        for (char c : s)
        {
            rows[currentRow] += c;
            currentRow += direction;
            if (currentRow == 0 || currentRow == numRows - 1) direction *= -1;
        }

        string result;
        for (int i = 0; i < numRows; i++) {
            result += rows[i];
        }
        return result;
    }
};


/*
|    /|    /|    /|
|  /  |  /  |  /  |
|/    |/    |/    |

P   A   H   N
A P L S I I G
Y   I   R

(0,0)     (0,2)     (0,4)
(1,0)(1,1)(1,2)(1,3)(1,4)
(2,0)     (2,2)     (2,4)

(0,0) (1,0) (2,0) // (1,1) // (0,2) (1,2) (2,2) // (1,3) // (0,4) (1,4) (2,4)
*/