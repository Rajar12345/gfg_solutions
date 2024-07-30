void solve(vector<string>&ans,string str,vector<vector<int>>&mat,int i,int j){
      
      if(i<0 || j<0 || i>=mat.size() || j>=mat[0].size() || mat[i][j]==0 || mat[i][j]==-1)
      return;
      if(i==mat.size()-1 && j==mat[0].size()-1){
          
          ans.push_back(str);
          return;
      }
      mat[i][j]=-1;
      solve(ans,str+"D",mat,i+1,j);
      solve(ans,str+"U",mat,i-1,j);
      solve(ans,str+"R",mat,i,j+1);
      solve(ans,str+"L",mat,i,j-1);
      
      mat[i][j]=1;
      return;
  }
    vector<string> findPath(vector<vector<int>> &mat) {
        vector<string>ans;
        solve(ans,"",mat,0,0);
        return ans;
    }
