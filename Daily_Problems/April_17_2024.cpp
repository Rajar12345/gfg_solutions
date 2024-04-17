int countPairs(int a[] , int n ) 
    {   vector<int>b,s;
       for(int i=0;i<n;i++){
           b.push_back(i*a[i]);
           s.push_back(b[i]);
       }
       sort(s.begin(),s.end());
       int ans=0;
       for(int i=0;i<n;i++){
           int i1=lower_bound(s.begin(),s.end(),b[i])-s.begin();
           ans+=i1;
           s.erase(s.begin()+i1); //This line makes sure that 0 ≤ i < j < n condition is satisfied. Do a step by step dry run on multiple random arrays with different cases and you will understand.
       }
       return ans;
    }
