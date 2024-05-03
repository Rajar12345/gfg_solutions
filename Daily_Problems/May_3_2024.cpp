vector<int> Kdistance(struct Node *root, int k)
    {
      // Your code here
      vector<int> ans;
      
    //   using queue to sotr pari -> {currentNode, currentDistance from root}
      queue<pair<Node*, int>> q;
      q.push({root, 0});
      
      while(!q.empty()) {
        //   extract node and distance value of the current node
          Node *node = q.front().first;
          int dis = q.front().second;
        //   after exrtacting pop that value from the queue
          q.pop();
          
        //   check if the current node distance == given distance,
        // add that node->data to out answer
          if(dis == k)
            ans.push_back(node->data);
        
        // if node->left is present, push it to the queue by increasing the distance by 1
          if(node->left)
            q.push({node->left, dis+1});
        // if node->right is present, push it to the queue by increasing the distance by 1
          if(node->right)
            q.push({node->right, dis+1});
      }
      
    //   finaly return the answer
      return ans;
    }
