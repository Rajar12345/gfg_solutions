int n=mat[0].size();
        k=k%n;
        for(int i=0;i<mat.size();i++)
        {
            vector<int> temp=mat[i];
            for(int j=0;j<mat[0].size();j++)
            {
                mat[i][(n+j-k)%n]=temp[j];
            }
        }
        return mat;
