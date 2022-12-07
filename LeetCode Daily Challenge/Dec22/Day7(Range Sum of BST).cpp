//Link for the question⬇⬇
//https://leetcode.com/problems/range-sum-of-bst/description/

//Easy level question

//just tree traversal and check if root->val is in range then add to sum

//code:

void preorder(TreeNode* root, int low, int high, int &sum){
        if(root==NULL)
            return;
        
        if(root->val<=high && root->val>=low)
            sum+=root->val;

        preorder(root->left,low,high,sum);
        preorder(root->right,low,high,sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        preorder(root,low,high,sum);
        return sum;
    }
