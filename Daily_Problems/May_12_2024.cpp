int minSteps(int d) {
        // code here
        int x  = ceil((-1+sqrt(1+8*d))/2);
        if((x*(x+1)/2-d)%2==0) return x;
        if(x%2==0) return x+1;
        return x+2;
    }
