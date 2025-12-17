/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return helper(root).balanced;
    }

    struct Info {
        int height;
        bool balanced;
    };

    Info helper(TreeNode* node)
    {
        Info result;
        result.height = 0;
        result.balanced = true;

        if (!node) return result;
        Info left = helper(node->left);
        Info right = helper(node->right);

        if ((!left.balanced || !right.balanced) || abs(left.height - right.height) > 1) {
            result.balanced = false;
            return result;
        }

        result.height = 1 + max(left.height, right.height);
        
        return result;
    }
};