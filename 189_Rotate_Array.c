void rotate(int* nums, int numsSize, int k) {
    int temp[100005];
    k = k % numsSize;  
    
    
    for (int i = 0; i < k; i++) {
        temp[i] = nums[numsSize - k + i];
    }
    
    
    for (int i = k; i < numsSize; i++) {
        temp[i] = nums[i - k];
    }
    
    
    for (int i = 0; i < numsSize; i++) {
        nums[i] = temp[i];
    }
}