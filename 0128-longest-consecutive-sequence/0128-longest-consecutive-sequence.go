func longestConsecutive(nums []int) int {
    if len(nums)==0{
        return 0
    }
    sort.Ints(nums)
    longest:=1
    currMax:=0
    const INT_MIN = -1 << 31
    lastSmaller:=INT_MIN
    for i, _:=range nums{
        if nums[i]-1==lastSmaller{
            currMax++
            lastSmaller=nums[i]
        }else if nums[i]!=lastSmaller{
            currMax=1
            lastSmaller=nums[i]
        }
        longest=max(longest, currMax)
    }
    return longest
}