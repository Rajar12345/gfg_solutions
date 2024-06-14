string armstrongNumber(int n){
        // initialize sum
        int sum=0;
        
        //calculate the length of the number
        std::string str=std::to_string(n);
        int len=str.size();
        
        // store the original number
        int org=n;
        
        // check if it is armstrong number or not
        while(n>=10)
        {
           sum+=pow(n%10,len);
           n=n/10;
        }
        sum+=pow(n%10,len);
        
        if(sum==org)
        {
            return "Yes";
        }
        return "No";
    }
