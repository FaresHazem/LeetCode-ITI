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
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        int leftDepth = getDepth(root, true);
        int rightDepth = getDepth(root, false);

        if (leftDepth == rightDepth) return pow(2, leftDepth) - 1;
        else return 1 + countNodes(root->left) + countNodes(root->right);
    }
    int getDepth(TreeNode* node, bool goLeft) {
        int depth = 0;
        while(node) {
            if (goLeft) node = node->left;
            else node = node->right;
            depth++;
        }
        return depth;
    }
};