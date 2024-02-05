class Solution {
public:
void dfs(int node, vector<int> &vis,vector<int> adjLs[], vector<int>&ls){
    vis[node]=1;
    ls.push_back(node);
    for(auto it:adjLs[node]){
        if(!vis[it]){
            dfs(it,vis, adjLs, ls);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
      vector<int>ls;
      int V=isConnected.size();
      vector<int> adjLs[V];
      for(int i=0;i<V;i++){
          for(int j=0;j<V;j++){
              if(isConnected[i][j]==1 && i!=j){
              adjLs[i].push_back(j);
              adjLs[j].push_back(i);
              }
          }
      }
        vector<int> vis(V,0);
        int count=0;
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                count++;
            dfs(i, vis, adjLs, ls);
            }
        }
      
        return count;
    }
};