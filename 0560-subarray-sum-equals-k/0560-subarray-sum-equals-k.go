func subarraySum(nums []int, k int) int {
    mpp:=make(map[int]int)
    mpp[0]=1
    preSum:=0
    cnt:=0
    for _,val:=range nums{
        preSum+=val
        rem:=preSum-k
        cnt+=mpp[rem]
        mpp[preSum]+=1
    }
    return cnt
}