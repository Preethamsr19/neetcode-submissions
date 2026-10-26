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
    int kthSmallest(TreeNode* root, int k) {
        set<int> sort;
        load(root,sort);
        auto it = sort.begin();
        advance(it, k - 1);
        return *it;



    }
    void load(TreeNode* root,set<int> &sort){
        if(root){
        sort.insert(root->val);
        load(root->left,sort);
        load(root->right,sort);
        }
        return;
    }
};
