/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    long long maxP;
    long long totalsum;
    int total(TreeNode* root) {
        if (root == nullptr)
            return 0;
        int rightsubsum = total(root->right);
        int leftsubsum = total(root->left);
        int sum = root->val + rightsubsum + leftsubsum;
        return sum;
    }

    int findmaxp(TreeNode* root) {
        if (root == NULL)
            return 0;
        int leftsum = findmaxp(root->left);
        int rightsum = findmaxp(root->right);

        long long s1 = root->val + leftsum + rightsum;
        long long s2 = totalsum - s1;

        maxP = max(maxP, s1 * s2);
        return s1;
    }

    int maxProduct(TreeNode* root) {
        maxP = 0;
        totalsum = total(root);
        findmaxp(root);
        return maxP % 1000000007;
    }
};

