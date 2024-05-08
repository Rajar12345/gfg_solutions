void preOrder(Node *root,vector<vector<int>>&ans,vector<int>&path){
        if(root==nullptr)
            return ;
            
        path.push_back(root->data);
        
        if(root->left==nullptr && root->right==nullptr)
            ans.push_back(path);
            
        preOrder(root->left,ans,path);
        preOrder(root->right,ans,path);
        path.pop_back();
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>>ans;
        vector<int>path;
        preOrder(root,ans,path);
        return ans;
    }
