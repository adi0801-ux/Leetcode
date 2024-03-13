/**
 * @param {string} s
 * @return {boolean}
 */

var isPalindrome = function(s) {
    const filterNonAlphabet = (str) => {
        return str.replace(/[^0-9a-zA-Z]/g, '');
    };
    s = s.trim();
    s = filterNonAlphabet(s);
    var str1 = s.toLocaleLowerCase();
    var str2 = str1.split('').reverse().join('');
    // var str2 = reverseStr(str1);
    return str1===str2;
};

