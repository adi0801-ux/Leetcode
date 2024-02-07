func findDuplicate(nums []int) int {
    freq := make([]int, len(nums))
    for _,val:=range nums{
        if freq[val]==0{
            freq[val]+=1
        }else{
            return val
        }
    }
    return -1
}