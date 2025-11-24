class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        if (s.size() % 2 != 0) return false;
        for (int i = 0; i < s.size(); i++)
        {
            if (!stack.empty())
            {
                if      (stack.top() == '(' && s[i] == ')') stack.pop();
                else if (stack.top() == '{' && s[i] == '}') stack.pop();
                else if (stack.top() == '[' && s[i] == ']') stack.pop();
                else stack.push(s[i]);
            }
            else
                stack.push(s[i]);
        }

        return stack.empty();
    }
};