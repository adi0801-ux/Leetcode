func setZeroes(matrix [][]int)  {
    n:=len(matrix)
    m:=len(matrix[0])
    row := make([]int, n)
    col := make([]int, m)
    for i:=0;i<n;i++{
        for j:=0;j<m;j++{
            if matrix[i][j]==0{
                row[i]=1;
                col[j]=1;
            }
        }
    }
    
    for i:=0;i<n;i++{
        for j:=0;j<m;j++{
            if row[i]==1 || col[j]==1{
                matrix[i][j]=0;
            }
        }
    }
}