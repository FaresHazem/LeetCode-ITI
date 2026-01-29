class Solution {
public:
    string reverseVowels(string s) {
        bool vowel1 = false, vowel2 = false;
        for (int i = 0, j = s.size() - 1; i < j; )
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
            s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || 
            s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
                vowel1 = true;
            else i++;
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || 
            s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || 
            s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U' )
                vowel2 = true;
            else j--;

            if (vowel1 && vowel2)
            {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                vowel1 = false;
                vowel2 = false;
                i++;
                j--;
            }
        }
    return s;
    }
};