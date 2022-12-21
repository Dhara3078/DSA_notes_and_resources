//Link for the question⬇⬇
//https://leetcode.com/problems/binary-tree-maximum-path-sum/

//Idea is to use post order traversal of tree 
    //while traversing compute left sub tree max sum and right same tree max sum 
    //and for current node first take maximum of left sub tree max and right subtree max and add curr node value in it
    //store currMAx from maximum of root value and root value + max of left subtree and right subtree 
    //after that store res value to maximum of previous res and max of currMax and lMax+rMax+root->val
    //return currMax
    int helper(TreeNode* root,int &res){
        if(root==NULL)
            return 0;
        
        int lMax=helper(root->left,res); //lMax = left subTree max sum path
        int rMax=helper(root->right,res);//rMax = right subtree max sum path
        
        int currMax=max(lMax,rMax)+root->val;
        currMax=max(currMax,root->val);
        
        res=max(res,max(currMax,lMax+rMax+root->val));
        
        return currMax;
    }
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        helper(root,res);
        
        return res;
          
    }
