class Solution {
  public:
    void inOrder(Node* root , int n , int &ans){
        if(root == NULL){
            return ;
        }
        inOrder(root->left , n , ans);
        if(root->key <= n){
            ans = root->key;
        }
        inOrder(root->right , n , ans);
    }
    int findMaxForN(Node* root, int n) {
        // code here
        int ans = -1;
        inOrder(root , n , ans);
        return ans;
    }
};
