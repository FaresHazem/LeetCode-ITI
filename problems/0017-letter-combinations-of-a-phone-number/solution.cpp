class Solution
{
public:
    unordered_map<char, string> digit_to_letters = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}};
    vector<string> letterCombinations(string digits)
    {
        vector<string> result;

        backtrack("", 0, digits, result);

        return result;
    }
    void backtrack(string current, int index, string &digits, vector<string> &result)
    {
        if (index == digits.size())
            result.push_back(current);
        string letters = digit_to_letters[digits[index]];
        for (char c : letters)
        {
            current.push_back(c);
            backtrack(current, index + 1, digits, result);
            current.pop_back();
        }
    }
};