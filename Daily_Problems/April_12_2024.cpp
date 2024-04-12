long long pairAndSum(int n, long long arr[]) {
        long long ans = 0;
        for(int i = 0; i < 32; i++) {
            int set_bits = 0;
            for(int j = 0; j < n; j++)
                set_bits += ((arr[j] & (1<<i)) >> i);
            ans += ((1LL * set_bits * (set_bits-1)/2)*(1LL << i));
        }
        return ans;
    }
