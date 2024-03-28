class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges, int distanceThreshold) {
        // Your code here
        vector<vector< pair<int, int>>> adj(n);
        for(auto i : edges){
            adj[i[0]].push_back({i[1], i[2]});
            adj[i[1]].push_back({i[0], i[2]});
        }
        vector<int> storeDis;
        for(int i = 0; i< n; i++){
            priority_queue<pair<int, int> , vector<pair<int, int>>, greater<pair<int, int>>> pq;
            pq.push({0, i});
            vector<int> vis(n, 1e9);
            vis[i] = 0;
            while(!pq.empty()){
                auto p = pq.top();
                pq.pop();
                int node = p.second;
                int dist = p.first;
                for(auto i : adj[node]){
                    int adjNode = i.first;
                    int adjDist = i.second;
                    if(dist + adjDist < vis[adjNode]){
                        vis[adjNode] = dist + adjDist;
                        pq.push({dist + adjDist, adjNode});
                    }
                }
            }
            int cnt = 0;
            for(auto i: vis){
                // cout<< i<<" ";
                if(i <= distanceThreshold) cnt++;
            }
            // cout<< endl;
            storeDis.push_back(cnt);
        }
        int mini = INT_MAX, ans = -1;
        for(int i = 0; i< n; i++){
            // cout<< storeDis[i]<<" ";
            if(storeDis[i] <= mini){
                ans = i;
                mini = storeDis[i];
            }
        }
        return ans;
    }
};
