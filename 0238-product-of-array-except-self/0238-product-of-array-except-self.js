/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    var count0=0, prod=1;
    for(let i of nums){
        if(i===0){
            count0++;
        }
        else{
            prod*=i;
        }
    }
    const ans=[];
    for(let i=0;i<nums.length;i++){
        if(nums[i]===0 && count0-1===0){
            ans.push(prod);
        }
        else if(count0>=1){
            ans.push(0);
        }
        else{
            ans.push(prod/nums[i]);
        }
    }
    return ans;
};