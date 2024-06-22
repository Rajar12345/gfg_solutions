long long ExtractNumber(string sentence) {

        // code here
         long long int ans=-1;
        
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]>='0' && sentence[i]<='9')
            {
                string aj="";
                bool k=true;
                while(i<sentence.size() && sentence[i]!=' ')
                {
                    if(sentence[i]=='9')
                    {
                        k=false;
                        // break;
                    }
                    aj+=sentence[i];
                    i++;
                    
                }
                
                if(k){
                long long int t=stoll(aj);
                    ans=max(ans,t);
                    
                }
                
            }
            
        }
    return(ans);
    }
