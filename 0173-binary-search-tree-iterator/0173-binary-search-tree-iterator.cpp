#include <stack>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * TreeNode *left;
 * TreeNode *right;
 * TreeNode() : val(0), left(nullptr), right(nullptr) {}
 * TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
private:
    std::stack<TreeNode*> nodeStack;

    void pushLeft(TreeNode* node) {
        while (node != nullptr) {
            nodeStack.push(node);
            node = node->left;
        }
    }

public:
    BSTIterator(TreeNode* root) {
         
        pushLeft(root);
    }
    
    int next() {
       
        TreeNode* topNode = nodeStack.top();
        nodeStack.pop();
        
        if (topNode->right != nullptr) {
            pushLeft(topNode->right);
        }
        
        return topNode->val;
    }
    
    bool hasNext() {
        
        return !nodeStack.empty();
    }
};

