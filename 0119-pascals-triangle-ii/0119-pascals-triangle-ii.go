func getRow(rowIndex int) []int {
    ans:=1
    var res []int
    res=append(res, 1)
    for i:=1;i<=rowIndex;i++{
        ans=ans * (rowIndex-i+1)
        ans=ans/i
        res=append(res, ans)
    }
    // res=append(res," ")
    return res
}
