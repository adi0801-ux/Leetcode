//tabulation approach
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int size = nums.size();
        int ans = 1;
        vector<int> temp (size,1);
        for( int i = 0;i<size;i++)
        for(int j=0;j<i;j++){
           if( nums[i]>nums[j]){
             if(temp[i]<temp[j]+1)
           temp[i] = temp[j] + 1;
           }
           ans = max(ans,temp[i]);
        }
        return ans;
    }
};