vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) {
        // Your code goes here;
        sort(b.begin(),b.end());
        vector<int>ans;
        for(int i=0;i<q;i++)
        {
            int x=a[query[i]];
            int y=upper_bound(b.begin(),b.end(),x)-b.begin();
            ans.push_back(y);
        }
        return ans;
    }
