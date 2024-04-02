 void inorder(Node *root,vector<int> &arr){
        if(root==NULL) return;
        
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);

    }
    
    int absolute_diff(Node *root)
    {
        vector<int>arr;
        inorder(root,arr);
        
        int ans = INT_MAX;

    // Iterate through arr to find the minimum absolute difference
        for (int i = 1; i < arr.size(); i++) {
           ans = min(ans, arr[i] - arr[i-1]);
        }
         return ans;
    }
