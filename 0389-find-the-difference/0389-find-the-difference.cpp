class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum=0;
        int sum2=0;
        for(auto it:s){
            sum+=it;
        }
        for(auto it:t){
            sum2+=it;
        }
        return char(sum2-sum);
    }
};