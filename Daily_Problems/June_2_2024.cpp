vector<int> constructList(int q, vector<vector<int>> &queries) {
        // code here
        vector<int>ans;
        int xo=0;
        ans.push_back(0);
        for(auto &it:queries){
            if(it[0]==0)    ans.push_back(it[1]^xo);
            else    xo^=it[1];
        }
        for(auto &it:ans)    it^=xo;
        sort(ans.begin(),ans.end());
        return ans;
    }
