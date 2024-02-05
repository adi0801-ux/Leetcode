func generate(numRows int) [][]int {
    var ans[][]int
    for row:=1;row<=numRows;row++{
        ans= append(ans, generateRow(row))
    }
    return ans
}

func generateRow(row int)[]int{
    ans:=1
    var ansRow []int
    ansRow = append(ansRow, 1)
    for col:=1;col<row;col++{
        ans=ans * (row-col)
        ans=ans/col
        ansRow =append(ansRow, ans)
    }
    return ansRow
}