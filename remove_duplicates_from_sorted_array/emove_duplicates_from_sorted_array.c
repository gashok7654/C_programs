int removeDuplicates(int* nums, int numsSize) {
    int i, j;
    i = 0;
    j = i+1;

    for(i =0, j = i+1; j<numsSize; i++, j++) {
        if(nums[i] == nums[j]) {
            j++;
            while(j<numsSize) {
                if(nums[i] != nums[j]) {
                    nums[i+1] = nums[j];
                    break;
                }
                j++;
            }
        } else {
            nums[i+1] = nums[j];
        }
    }
    if(j != numsSize)
        return i;
    return i+1; 
}
