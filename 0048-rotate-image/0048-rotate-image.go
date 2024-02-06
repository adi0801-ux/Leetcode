func rotate(matrix [][]int)  {
    var n=len(matrix)
    for i:=0;i<=n-2;i++{
        for j:= i+1;j<n;j++{
            matrix[i][j], matrix[j][i]=matrix[j][i], matrix[i][j];
        }
    }
    for i:=0;i<n;i++{
        left:=0
        right:=n-1
        for left<right{
            matrix[i][left], matrix[i][right]=matrix[i][right], matrix[i][left];
            left++
            right--
        }
    }
}