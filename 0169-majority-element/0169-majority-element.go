func majorityElement(nums []int) int {
    mp:=make(map[int]int)
    for _, val:=range nums{
        mp[val]++;
        if mp[val]>len(nums)/2{
            return val
        }
    }
    return -1
}