/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    var strr;
    for(let i=0; i < haystack.length;i++){
        strr = haystack.substring(i, needle.length+i);
        if(strr===needle)return i;
    }
    return -1;
};