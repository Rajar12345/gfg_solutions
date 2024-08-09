 const int MOD = 1000000007;
    int Maximize(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        long long ans=0;
        for (size_t i=0;i<arr.size();i++){
            ans+=(arr[i]*i);}
        return ans%MOD;
    }
