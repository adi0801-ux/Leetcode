func findTheDifference(s string, t string) byte {
    sum1 :=0
    var sum2 int =0
    for _, char :=range s{
        sum1+=int(char)
    }
    for _, char:=range t{
        sum2+=int(char)
    }
    return byte(sum2-sum1)
}