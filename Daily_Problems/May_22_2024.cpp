int countStations(double maxDist, vector<int> &arr) {
        int cnt = 0, n = arr.size();
        
        for(int i = 0; i < n - 1; i++) {
            double stationsInBetween = ((double) arr[i + 1] - arr[i]) / maxDist;
            cnt += (int) stationsInBetween;
        }
        
        return cnt;
    }

    double findSmallestMaxDist(vector<int> &arr, int k) {
        int n = arr.size();
        double maxi = INT_MIN;
        
        for(int i = 1; i < n; i++)
            maxi = max(maxi, (double) arr[i] - arr[i - 1]);
            
        double low = 0, high = maxi, diff = 0.000001;
        while(high - low > diff) {
            double mid = low + (high - low) / 2;
            
            if(countStations(mid, arr) <= k)
                high = mid;
            else
                low = mid;
        }
        
        return high;
    }
