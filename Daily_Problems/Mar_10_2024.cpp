string removeDuplicates(string str) {
	    // code here
	   // vector<int>ans;
	   string ans="";
	   for(int i=0;i<str.size();i++){
	       if(ans.find(str[i])==string::npos)   ans.push_back(str[i]);
	   }
	   return ans;
	    
	}
