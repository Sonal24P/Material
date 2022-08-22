nums=[7,478,34,892,98,4]
for limit in range(len(nums)):
    tmp=nums[limit]
    for index in range(limit,len(nums)):
        if nums[index]<tmp:
            tmp=nums[index]
            i=index
    if nums[limit]>tmp:
        nums[limit],nums[i]=nums[i],nums[limit]
print(nums)
            
            