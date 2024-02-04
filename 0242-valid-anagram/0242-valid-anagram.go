func isAnagram(s string, t string) bool {
    n1:=len(s)
    n2:=len(t)
    if n1!=n2{
        return false
    }
    m1:=make(map[rune]int)
    m2:=make(map[rune]int)
    for _,ch:=range s{
        m1[ch]++;
    }
    for _,ch:=range t{
        m2[ch]++;
    }
    for _,char:=range s{
        if m1[char]!=m2[char]{
            return false;
        }
    }
    return true
}