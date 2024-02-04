func strStr(haystack string, needle string) int {
    n1:=len(haystack)
    n2:=len(needle)
    if n1<n2{
        return -1
    }
    // for i=0;i<n1-n2;i++{
    //     s:=
    // }
    return strings.Index(haystack, needle)
}