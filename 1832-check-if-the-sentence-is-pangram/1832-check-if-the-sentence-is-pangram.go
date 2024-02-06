func checkIfPangram(sentence string) bool {
    mp:= make(map[rune]bool);
    for _, val:=range sentence{
        mp[val]=true;
    }
    for char:='a';char<='z';char++{
        if mp[char]!=true{
            return false
        }
    }
    return true
}