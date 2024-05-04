Node *tree(int is, int ie, int in[], int ps, int pe, int post[], unordered_map<int, int> &mp) 
    {
        if(is > ie or ps > pe)
            return NULL;
            
        Node *root = new Node(post[pe]);
        int inroot = mp[root->data];
        int numsLeft = inroot - is;
        
        root->left = tree(is, inroot - 1, in, ps, ps + numsLeft - 1, post, mp);
        root->right = tree(inroot + 1, ie, in, ps + numsLeft, pe - 1, post, mp);
        
        return root;
    }

    Node *buildTree(int in[], int post[], int n)
    {
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
            mp[in[i]] = i;
        
        return tree(0, n - 1, in, 0, n - 1, post, mp);
    }
