class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCnt=0;
        int cnt=0;
        for (auto it:nums){
            if(it==0){
                cnt=0;
            }else{
                cnt++;
            }
            maxCnt=max(maxCnt, cnt);
        }
        return maxCnt;
    }
};