class Solution {
public:
    int strStr(string haystack, string needle) {
        int start = 0;
    
        for (int i = 0, j = 0; i <= haystack.size(); )
        {
            if (haystack[i] != needle[j])
            {
                j = 0;
                start++;
                i = start;
            }
            else 
            {
                if (j == needle.size() - 1)
                {
                    return start;
                }
                j++;
                i++;
            }
        }
        return -1;
    }
};