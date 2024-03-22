private:
    void getDiagonalSum(Node* root, vector<int>& ans, int level){
        if(root == NULL){
            return;
        }
        if(ans.size() < level + 1){
            ans.push_back(root->data);
        }else{
            ans[level] += root->data;
        }
        getDiagonalSum(root->left, ans, level + 1);
        getDiagonalSum(root->right, ans , level);
    }
public:
    vector <int> diagonalSum(Node* root) {
        vector<int> ans;
        getDiagonalSum(root, ans, 0);
        return ans;
    }
