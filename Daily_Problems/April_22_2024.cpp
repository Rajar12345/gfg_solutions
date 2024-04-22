int minRow(int n, int m, vector<vector<int>> a) {
        int minCount = INT_MAX;
        int minIndex = -1;
    
        for (int i = 0; i < n; i++) {
           int rowCount = 0;
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 1) {
                   rowCount++;
                }
             }
         if (rowCount < minCount) {
            minCount = rowCount;
            minIndex = i + 1; 
         }
    }
    return minIndex;
}
