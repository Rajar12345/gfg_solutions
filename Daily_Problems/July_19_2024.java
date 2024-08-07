int n = arr.length;
        int ans[] = new int[n];
        ArrayList<Integer> list = new ArrayList<>();
        for(int i=n-1;i>=0;i--){
            if(list.isEmpty() || list.get(list.size()-1) < arr[i]){
                ans[i] = list.size();
                list.add(arr[i]);
            }else{
                int index = -1;
                int low = 0,high = list.size()-1;
                while(low<=high){ 
                    int mid = low+(high-low)/2;
                    if(arr[i]>list.get(mid)){
                        index = mid;
                        low = mid+1;
                    }else {
                        high=mid-1;
                    }
                }
                ans[i] = index+1;
                list.add(index+1,arr[i]);
            }
        }
        return ans;
