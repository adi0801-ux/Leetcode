class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>maxH;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                maxH.push(matrix[i][j]);
                if(maxH.size()>k)maxH.pop();
            }
        }
        return maxH.top();
    }
};