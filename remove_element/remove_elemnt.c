int removeElement(int* nums, int numsSize, int val) {
    int i,j, temp;;
    i = 0;
    j = numsSize -1;
    while(i<j) {
        if(nums[j] == val) {
            j--;
            continue;
        }
        if(nums[i] == val) {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j--;
        }
        i++;
    }

    if(i == j && nums[i] != val)
        return i+1;
    return i;
}
