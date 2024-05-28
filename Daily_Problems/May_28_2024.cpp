int minimumCost(int n, int w, vector<int> &cost) {
        vector<int>prev(w+1,1e9),curr(w+1);
        
        prev[0]=0;
        for(int i=0;i<n;i++){
            curr[0]=0;
            for(int k=0;k<=w;k++){
                int take=1e9;
                
                if(k>=(i+1)&& cost[i]!=-1){
                    take=cost[i]+curr[k-i-1];
                }
                int nott=prev[k];
                curr[k]=min(take,nott);
            }
            prev=curr;
        }
        // int val=func(w,cost,n-1,dp);
        if(prev[w]>1e8)return -1;
        return prev[w];
        
    }

