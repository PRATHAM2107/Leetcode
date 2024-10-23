                    sum += node->right->val;
                }
            }

            for (auto node : nodes) {
                int t = sum;
                if (node->left) t -= node->left->val;
                if (node->right) t -= node->right->val;
                if (node->left) node->left->val = t;
                if (node->right) node->right->val = t;
            }
        }

        return root;
    }
};
