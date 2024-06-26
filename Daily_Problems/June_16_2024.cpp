vector<bool> SieveOfEratosthenes(int n)
    {
        vector<bool>prime(n+1,true);
 
        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        return prime;
    }
    
    vector<int> getPrimes(int n) {
        vector<int>ans(2,-1);
        
        vector<bool>temp=SieveOfEratosthenes(n);
        
        for(int i=2;i<n;i++){
            if(temp[i]==true && temp[n-i]==true){
                ans[0]=i;
                ans[1]=n-i;
                return ans;
            }
        }
        return ans;
    }
