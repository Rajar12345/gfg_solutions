 vector<int>ans;

       unordered_map<int, int>mp;


        for(int i=0;i<m;i++){
            mp[b[i]]++;
        }


        for(int i=0;i<n;i++){//if element not found in map 
            if(mp.find(a[i])==mp.end()) ans.push_back(a[i]);
        }
        
        return ans;
