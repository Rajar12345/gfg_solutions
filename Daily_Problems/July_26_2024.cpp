bool fun(string &str,int &k,int freq[]){
        int n=0;
        for(int i=0;i<str.size();i++){
            if(str[i]>=97 && str[i]<=122)
                n++;
            
        }
        
        if(n<26)
            return false;
        
        for(auto z:str){
            if(z>=97 && z<=122)
                freq[z-97]++;
        }
    
        int count=0;
        for(int i=0;i<26;i++){
            if(freq[i]==0)
                count++;
        }
        
        return (count<=k);
    }


    bool kPangram(string str, int k) {
        // code here
        int freq[26];
        for(int i=0;i<26;i++){
            freq[i]=0;
        }
    
        return fun(str,k,freq);
        
        
        
    }
