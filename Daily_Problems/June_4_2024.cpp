string binaryNextNumber(string s) {
        // code here.
        int n=s.size(),zero=false;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
                s[i]='1';
                zero=true;
                break;
            }
            else    s[i]='0';
        }
        if(!zero)   s='1'+s;
        int i=0;
        while(s[i]=='0' && i<s.size())  i++;
        return s.substr(i);
    }
