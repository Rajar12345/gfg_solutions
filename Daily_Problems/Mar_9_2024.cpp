int p = pow(2, r);
        int dig = n / p;
        int ind = n % p;
        string cp = "";
        cp.push_back(s[dig]);
        for(int i = 0; i < r; i++){
            string neu = "";
            for(auto j : cp){
                if(j == '1'){
                    neu.push_back('1');
                    neu.push_back('0');
                }else{
                    neu.push_back('0');
                    neu.push_back('1');
                }
            }
            cp = neu;
        }
        return cp[ind];
