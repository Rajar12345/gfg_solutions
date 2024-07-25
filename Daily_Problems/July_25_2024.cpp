Node* solve(vector<int>&nums, int start, int end){
        if(start > end) return NULL; 
        
        int mid = (start + end)/2; 
        
        Node* curr = new Node(nums[mid]); 
        
        curr->left = solve(nums, start, mid-1); 
        
        curr->right = solve(nums, mid+1,end);
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        // Code here
        int start = 0; 
        int end = nums.size()-1;
        
        return solve(nums, start, end);
    }
