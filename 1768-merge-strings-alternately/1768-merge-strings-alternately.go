func mergeAlternately(word1 string, word2 string) string {
    var n1=len(word1)
    var n2=len(word2)
    i:=0
    j:=0
    var res []byte
    for i<n1 && j<n2{
        res=append(res,word1[i]);
        res=append(res,word2[j]);
        i++;
        j++;
    }
    for(i<n1){
        res=append(res,word1[i]);
        i++;
    }
    for j<n2{
        res=append(res,word2[j]);
        j++;
    }
    return string(res)
}