long long sumMatrix(long long n, long long q) {
        // code here
        return  (q> 2*n) ? 0 : n - abs(n+1-q);

    }
