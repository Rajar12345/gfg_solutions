vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        unordered_map<int,int> mp;
        vector<int> ans;
        
        for(int i = 0; i<n+2; i++){
            mp[arr[i]]++;
            if(mp[arr[i]] >=2)
                ans.push_back(arr[i]);
        }
        
        return ans;
    }
