stack<int> st;
        int n=mat.size();
        for(int i=0;i<n;i++)
        st.push(i);
       
        while(st.size()!=1)  
        {
            int a=st.top();
            st.pop();
            int b=st.top();
            if(mat[a][b]==0)
            {
                st.pop();
                st.push(a);
            }
        }
        
        int cele=st.top();
        
        for(int j=0;j<n;j++)
        {
            if(j==cele) continue;
            
            if(mat[cele][j]!=0)
             return -1;
             if(mat[j][cele]!=1)
             return -1;
        }
         return cele;
