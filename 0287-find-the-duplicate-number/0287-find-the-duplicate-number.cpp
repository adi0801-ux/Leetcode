class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>freq(nums.size(),0);
        for(auto it:nums){
            if(freq[it]==0){
                freq[it]+=1;
            }else return it;
        }
        return -1;
    }
};