func searchMatrix(matrix [][]int, target int) bool {
    n:=len(matrix)
    m:=len(matrix[0])
    low:=0;
    high:=n*m-1
    for(low<=high){
        mid:=(low+high)/2
        row:= mid/m
        col:= mid%m
        if(matrix[row][col]==target){
            return true
        }else if matrix[row][col]<=target{
            low++;
        }else{
            high--
        }
    }
    return false;
}