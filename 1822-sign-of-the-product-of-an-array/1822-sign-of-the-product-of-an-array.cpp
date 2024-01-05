class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0;
        for(auto it:nums){
            if(it==0)return 0;
            else if(it<0)neg++;
        }
        if(neg%2!=0)return -1;
        else return 1;
    }
};