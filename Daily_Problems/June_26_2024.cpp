int cnt=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    if(j<matrix[0].size()-1&&matrix[i][j+1]==1){
                        cnt++;
                        
                    }
                    if(i<matrix.size()-1 && matrix[i+1][j]==1){
                        cnt++;

                    }
                    if(j>0 && matrix[i][j-1]==1){
                        cnt++;

                    }
                    if(i>0 && matrix[i-1][j]==1){
                        cnt++;

                    }
                }
            }
        }
        return cnt;
