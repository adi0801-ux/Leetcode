/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(jewels, stones) {
    const mp1 = new Map();
    for(let x of jewels){
        mp1.set(x,1);
    }
    var count=0;
    for(let x of stones){
        if(mp1.get(x)==1)count++;
    }
    return count;
};
