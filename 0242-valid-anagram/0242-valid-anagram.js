/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    
    const mp1=new Map([]);
    const mp2=new Map([]);
    if(s.length!==t.length)return false;
    for(let x of s){
        mp1.set(x, (mp1.get(x) || 0) + 1);
    }
    for(let x of t){
        mp2.set(x, (mp2.get(x) || 0) + 1);
    }
    // for(let i in s){
    //     if(mp1[i]!=mp2[i]){
    //         return false;
    //     }
    // }
    for (let [key, value] of mp1) {
        if (mp2.get(key) !== value) {
            return false;
        }
    }
    return true;
};