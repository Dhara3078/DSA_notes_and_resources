//Link for the question⬇⬇
//https://leetcode.com/problems/leaf-similar-trees/description/

//Easy level question 

 void preorder(TreeNode* root, vector<int> &vec){
        if(root==NULL)
            return;
        
        if(root->left==NULL && root->right==NULL)
            vec.push_back(root->val);
        
        preorder(root->left, vec);
        preorder(root->right, vec);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vec1;
        vector<int> vec2;
        preorder(root1, vec1);
        preorder(root2, vec2);

        if(vec1.size()!=vec2.size())
            return false;

        int n = vec1.size();
        for(int i=0; i<n; i++){
            if(vec1[i]!=vec2[i])
                return false;
        }

        return true;
    }
