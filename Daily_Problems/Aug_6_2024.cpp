int count=0;
        int n=str.size();
        int i=0;
        while(i<n){
            string s="";
            int j=i;
            while(j<n && str[j]!='.'){
                s+=str[j];
                j++;
            }
            i=j+1;
            int val=stoi(s);
            if((val!=0 && s[0]=='0') || val<0 || val>255 || count==4){
                return false;
            }
            else{
                count++;
            }
        }
        return count==4;
