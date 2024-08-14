/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    for(int i = 0 ; i < numsSize ; i++){
        result[i] = 1;
    }
    int leftprod=1;
    for(int i = 0 ; i < numsSize ; i++){
        result[i]*=leftprod;
        leftprod*=nums[i];
    }
    int rightprod=1;
    for(int i = numsSize-1 ; i >= 0 ; i--){
        result[i]*=rightprod;
        rightprod*=nums[i];
    }
    return result;
}