int helper(Node* root)
  {
      if(!root) return 0;
      
      if(!root->left and !root->right) return root->data;
      
      int lft=helper(root->left);
      int rgt=helper(root->right);
      
      ans=ans&&(root->data==lft+rgt);
      
      return root->data+lft+rgt;
  }
    bool isSumTree(Node* root) {
        helper(root);
        return ans;
    }
