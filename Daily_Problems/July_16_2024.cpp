int pos=0;
        int ppp=0;
        string str="";
        int len=s.size();
        for(int i=0;i<len;i++){
            if(s[i]==ch)
            ++ppp;
            
            if(ppp==count){
                ++i;
                 str=s.substr(i);
                return str;
            }
        }
        // string str=s.substr(pos);
        return str;
