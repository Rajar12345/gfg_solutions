if(s>9*d)
        return "-1";
        string ans="";
        for(int i=d;i>=1;i--){
            for(int j=9;j>=0;j--){
                if(i!=1){
                if(s-j>0){
                    ans=to_string(j)+ans;
                    s-=j;
                    break;
                }
                }
                else{
                    ans=to_string(s)+ans;
                    break;
                }
            }
        }
        return ans;
