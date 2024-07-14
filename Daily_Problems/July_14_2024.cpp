void segregate0and1(vector<int> &arr) {
        int left = 0;
        int right = arr.size()-1;
        // Traversing the entire array
        while(left<right){
            
        //incremanting left index while we see 0 in it
            while(arr[left]==0 and left<right){
                left++;
            }
        //dremanting right index while we see 1 in it
            while(arr[right]==1 and left<right){
                right--;
            }
         //If left is smaller than right then there is a 1 at left
            // and a 0 at right. Exchange arr[left] and arr[right]
            if(left<right){
                swap(arr[left],arr[right]);
                left++;
                right--;
            }
        }
    }
