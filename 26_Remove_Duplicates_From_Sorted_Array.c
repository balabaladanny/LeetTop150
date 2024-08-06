
int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0) return 0;
    int ind = 0;
    for(int i = 1 ; i < numsSize ; i++){
        if(nums[i]!=nums[ind]){
            ind++;
            nums[ind] = nums[i];
        }
    }
    return ind+1;
}