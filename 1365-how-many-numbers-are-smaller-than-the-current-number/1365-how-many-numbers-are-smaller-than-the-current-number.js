/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function(nums) {
    const ans=[];
    for(let i of nums){
        let count=0;
        for(let j of nums){
            if(i>j){
                count++;
            }
        }
        ans.push(count);
    }
    return ans;
};