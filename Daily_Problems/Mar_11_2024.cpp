int r1=0,c1=0,r2=n-1,c2=n-1;
	    int ans=0;
	    while(r1<n && r2>=0){
	        int EleSum=mat1[r1][c1]+mat2[r2][c2];
	        if(EleSum==x) ans++,c1++,c2--;
	        if(EleSum<x) c1++;
	        if(EleSum>x) c2--;
	        
	        if(c1==n) r1++,c1=0;
	        if(c2==-1) r2--,c2=n-1;
	    }
	    return ans;
