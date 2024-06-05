int sa=accumulate(a,a+n,0);
        int sb=accumulate(b,b+m,0);
        if(abs(sa-sb) % 2 != 0){return -1;}
        int target=abs(sa-sb)/2;
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=0;
        while(i < n && j < m){
            int d=abs(a[i]-b[j]);
            if(d == target){return 1;}
            if(d > target){
                if(a[i] > b[j]){
                    j++;
                }
                else{
                    i++;
                }
            }
            else if(d < target){
                if(a[i] > b[j]){
                    i++;
                }
                else{
                    j++;
                }
            }
        }
        return -1;
