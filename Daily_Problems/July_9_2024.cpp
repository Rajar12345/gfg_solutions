int res = 0, diff = INT_MAX, n = arr.size();
        sort(arr.begin(), arr.end());
        
        for(int i=0;i<n-2;i++){
            int low = i+1, high = n-1;
            while(low < high){
                int sum = arr[i] + arr[low] + arr[high];
                if(sum == target) return target;
                else if(abs(sum - target) < diff){
                    diff = abs(sum - target);
                    res = sum;
                }
                else if(abs(sum - target) == diff){
                    res = max(res, sum);
                }
                
                if(sum < target) low++;
                else high--;
            }
        }
        return res;
