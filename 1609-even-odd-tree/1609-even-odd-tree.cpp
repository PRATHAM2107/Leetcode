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
    bool isEvenOddTree(TreeNode* root) {
        if (root == NULL) 
            return true;
    
        queue<TreeNode*> q;
        q.push(root);
        int l=0;
        while (!q.empty()) {
            int size = q.size();
            int pre=-1;

            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                int cur= temp-> val;
                q.pop();
                
                if(l%2==0)
                {
                    if(cur%2!=1 || (cur<=pre && pre!=-1))
                        return false;
                    pre=cur;
                }
                else
                {
                    if(cur%2!=0 || (cur>=pre && pre!=-1))
                        return false;
                    pre=cur;
                }
                    

                if (temp->left != NULL) q.push(temp->left);
                if (temp->right != NULL) q.push(temp->right);
            }
            l++;
        }
    
    return true;
    }
};