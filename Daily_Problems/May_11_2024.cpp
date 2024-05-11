vector<long long> jugglerSequence(long long n) {
       
        vector<long long> v;
        v.push_back(n);
        while(n!=1)
        {
            if(n%2)
            n=n*sqrt(n);
            else
            {
            n=sqrt(n);
            }
            v.push_back(n);
        }
        return v;
    }
