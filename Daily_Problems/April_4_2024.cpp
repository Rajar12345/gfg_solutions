long long sumSubstrings(string s){
        
        int MOD = 1000000007;
        long long res = 0;
        long long curr = 0;
        
        for(int i = 0; i < s.length(); i++) {
            curr = (curr * 10 + (i + 1) * (s[i] - '0')) % MOD;
            res = (res + curr) % MOD;
        }
        
        return res;
    }
