bool isBSTUtil(Node* node, int min, int max) {
    // An empty tree is a BST
    if (node == nullptr) 
        return true;

    // False if this node violates the min/max constraint
    if (node->data < min || node->data > max)
        return false;

 
    return isBSTUtil(node->left, min, node->data - 1) &&
           isBSTUtil(node->right, node->data + 1, max);
}

bool isBST(Node* root) {
    return isBSTUtil(root, INT_MIN, INT_MAX);
    }
