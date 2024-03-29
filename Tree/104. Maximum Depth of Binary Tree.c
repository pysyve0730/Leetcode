#include<stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};



int maxDepth(struct TreeNode* root) {

    if (root != NULL) {
        int count_left = maxDepth(root->left);
        int count_right = maxDepth(root->right);
        return count_left > count_right ? count_left + 1 : count_right + 1; //當node有值，+1，計算每條路徑的高度，回傳最高

    }
    else {
        return 0; //當node為NULL，+0
    }



}

