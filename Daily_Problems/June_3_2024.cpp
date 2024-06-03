int numberOfConsecutiveOnes(int n) {
        // code here
        const int Mod = 1e9+7;
    vector<int> dp(1e5+2, 0);
    dp[2] = 1;
    int psum = 0;
    int sum = 1;
        for(int i=3;i<=n;i++){
            int csum=(psum+sum)%Mod;
            dp[i]=((dp[i-1]*2)%Mod+csum)%Mod;
            psum=sum;
            sum=csum;
        }
        return dp[n]%Mod;
    }
