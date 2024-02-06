func sortColors(nums []int)  {
    var n=len(nums)
    low:=0
    mid:=0
    high:=n-1
    for mid<=high{
        if nums[mid]==0{
            nums[mid], nums[low]= nums[low],nums[mid]
            mid++;
            low++;
        }else if nums[mid]==1{
            mid++;
        }else if nums[mid]==2{
            nums[mid], nums[high]= nums[high], nums[mid]
            high--;
        }
    }
}