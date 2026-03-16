class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> result;
        recurse(0, 0, "", result, n);
        return result;
    }
    void recurse(int open_count, int close_count, string current_string, vector<string> &result, int n)
    {
        if (current_string.size() == 2 * n)
        {
            result.push_back(current_string);
            return;
        }
        if (open_count < n)
        {
            recurse(open_count + 1, close_count, current_string + '(', result, n);
        }
        if (close_count < open_count)
        {
            recurse(open_count, close_count + 1, current_string + ')', result, n);
        }
    }
};