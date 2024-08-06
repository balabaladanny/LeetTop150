bool canJump(int* nums, int numsSize) {
    int maxInd = 0;
    for(int i = 0 ; i < numsSize && i <= maxInd ; i++){
        maxInd = (maxInd > i + nums[i])? maxInd : i + nums[i];
        if(maxInd >= numsSize-1)return true;
    }
    return false;
}