class Solution {
public:
    int ans;

    int height(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        int left = height(root->left);
        int right = height(root->right);

        // Update the global answer (diameter) with the path passing through the current node
        ans = max(ans, left + right);

        // Return the actual height of the current subtree for the parent call
        return max(left, right) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        ans = 0; // Initialize ans to 0 before starting the traversal
        height(root);
        return ans;
    }
};
