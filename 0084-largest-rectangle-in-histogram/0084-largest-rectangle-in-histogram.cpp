class Solution {
public:
    vector<int>NSL(vector<int>&heights){
        vector<int>left;
        stack<pair<int, int>>s;
        int n=heights.size();
        for(int i=0;i<n;i++){
            if(s.size()==0)left.push_back(-1);
            else if(s.size()>0 && s.top().first<heights[i])left.push_back(s.top().second);
            else if(s.size()>0 && s.top().first>=heights[i]){
                while(s.size()>0 && s.top().first>=heights[i])s.pop();
                if(s.size()==0)left.push_back(-1);
                else left.push_back(s.top().second);
            }
            s.push({heights[i], i});
        }
        return left;
    }
    
    vector<int>NSR(vector<int>&heights){
        vector<int>right;
        stack<pair<int, int>>s;
        int n=heights.size();
        for(int i=n-1;i>=0;i--){
            if(s.size()==0)right.push_back(n);
            else if(s.size()>0 && s.top().first<heights[i])right.push_back(s.top().second);
            else if(s.size()>0 && s.top().first>=heights[i]){
                while(s.size()>0 && s.top().first>=heights[i])s.pop();
                if(s.size()==0)right.push_back(n);
                else right.push_back(s.top().second);
            }
            s.push({heights[i], i});
        }
        reverse(right.begin(), right.end());
        return right;
    }
    
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int ans=heights[0];
        vector<int>left(n), right(n), width(n), area(n);
        left=NSL(heights);
        right=NSR(heights);
        for(int i=0;i<n;i++){
            width[i]=right[i]-left[i]-1;
        }
        for(int i=0;i<n;i++){
            area[i]=heights[i]*width[i];
            ans=max(ans, area[i]);
        }
        return ans;
    }
};