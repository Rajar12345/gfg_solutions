int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
       vector<int> rightmax(n, 0), rightmin(n, 0);
       rightmax[n-1] = arr[n-1];
       rightmin[n-1] = arr[n-1];
       for(int i = n-2 ; i >= 0 ; i--){
           rightmax[i] = max(rightmax[i+1], arr[i]);
           rightmin[i] = min(rightmin[i+1], arr[i]);
       }
       int ans = INT_MAX;
       int leftmax = INT_MIN, leftmin = INT_MAX;
       int j = 0;
       for(int i = k ; i <= n ; i++){
            int minval  , maxval;
           if(i <= n-1){
            minval  = min(leftmin, rightmin[i]);
           maxval = max(leftmax, rightmax[i]);
           }else{
               minval = leftmin;
               maxval = leftmax;
           }
           //cout<<minval<<" "<<maxval<<endl;
           //cout<<maxval-minval<<endl;
           ans = min(ans, maxval-minval);
           //cout<<i<<" "<< ans <<endl;
           leftmax = max(leftmax, arr[j]);
           leftmin = min(leftmin, arr[j]);
           j++;
       }
     
       return ans; 
    }
