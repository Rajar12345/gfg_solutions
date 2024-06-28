int n = arr.size();
        string ans = "-1";
        for(int i=0; i<n; i++){
            bool flag = 1;
            for(int j=0, k=n-1; j<=k; j++, k--){
                if(arr[i][j] != arr[i][k]){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                ans = to_string(i) + " " + "R";
                return ans;
            }
        }
        for(int i=0; i<n; i++){
            bool flag = 1;
            for(int j=0, k=n-1; j<=k; j++, k--){
                if(arr[j][i] != arr[k][i]){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                ans = to_string(i) + " " + "C";
                return ans;
            }
        }
        return ans;
