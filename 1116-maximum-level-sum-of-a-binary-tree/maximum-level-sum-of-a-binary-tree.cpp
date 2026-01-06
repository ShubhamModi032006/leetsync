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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> nums;
        int sum = 0;
        int maxsum = INT_MIN;
        int maxidx = 0;
        int leval = 0;
        q.push(root);
        while (!q.empty()) {
            int s = q.size();
            sum = 0;
            for (int i = 0; i < s; i++) {
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            if (sum > maxsum) {
                maxsum = sum;
                maxidx = leval;

            }
            leval++;
        }
        return maxidx + 1;
    }
};

