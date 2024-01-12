class Solution {
public:
    void dfs(vector<vector<int>>& rooms, int source, vector<bool>&vis){
        vis[source]=1;
        for(auto adjNode:rooms[source]){
            if(!vis[adjNode]){
                dfs(rooms, adjNode, vis);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>vis(n,false);
        dfs(rooms, 0, vis);
        for(auto x:vis){
            if(x==false)return false;
        }
        return true;
    }
};