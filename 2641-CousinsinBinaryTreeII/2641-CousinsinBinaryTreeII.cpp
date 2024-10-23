    void dfs2(TreeNode* root, int lvl, vector<int> &sums, int bro) {
    }

            sums[lvl] += root->val; 
        dfs(root->left, lvl + 1, sums); 
        dfs(root->right, lvl + 1, sums); 
        if (!root) return;

        root->val = sums[lvl] - (root->val + bro); 

        int rightbro = root->right ? root->right->val : 0;
        int leftbro = root->left ? root->left->val : 0; 

            
        if (root->left) 
            dfs2(root->left, lvl + 1, sums, rightbro); 
        
