//Link for the question⬇⬇
//https://leetcode.com/problems/maximum-product-of-splitted-binary-tree/

    long long totalTreeSum=0,result=0;
    void getTotalTreeSum(TreeNode* root)    //Get total sum of the tree.
    {
        if(!root)
            return;
        totalTreeSum+=root->val;
        getTotalTreeSum(root->left);
        getTotalTreeSum(root->right);
    }
    int SumUnder(TreeNode* root)             //Get the totalSum under the node `root` including root.
    {
       if(!root)
            return 0;
       int sumUnderLeft=SumUnder(root->left),sumUnderRight=SumUnder(root->right); //Get the sum of left and right subtree under node 'root'
       result=max({result,(totalTreeSum-sumUnderLeft)*sumUnderLeft,(totalTreeSum-sumUnderRight)*sumUnderRight});    //Get the max product after making left or right subtrees as seprarate tree.
       return sumUnderLeft+sumUnderRight+root->val;
    }
    int maxProduct(TreeNode* root) 
    {
        getTotalTreeSum(root);
        SumUnder(root);
        return result%(1000000007);
    }
