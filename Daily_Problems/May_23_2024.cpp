int kPalindrome(string str, int n, int k)
    {
        // code here
        // Nishant Singh
        // National Institute of Technology
        vector<vector<int>>v(n+1,vector<int>(n+1));
        string t=str;
        reverse(begin(str),end(str));
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(str[i-1]==t[j-1]) v[i][j]=1+v[i-1][j-1];
                else v[i][j]=max(v[i-1][j],v[i][j-1]);
            }
        }
        return n-v[n][n]<=k;
    }
