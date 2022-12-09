//Link for the question⬇⬇
//https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/description/

//Medium level question

//Hint: find the maximum and minimum node value for each subtree 

//code:
    int helper(TreeNode* root, int Min, int Max){
        if(root==NULL)
            return Max-Min;

        Min=min(root->val, Min);
        Max=max(root->val, Max);

        return max(helper(root->left,Min,Max), helper(root->right, Min, Max));
    }
    int maxAncestorDiff(TreeNode* root) {
        return helper(root,INT_MAX,INT_MIN);
    }
