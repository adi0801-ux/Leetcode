func moveZeroes(nums []int)  {
    j:=0;
    for i,_:=range nums{
        if nums[i]!=0{
            nums[j], nums[i]=nums[i],nums[j]
            j++
        }
    }
}