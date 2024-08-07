int jump(int* nums, int numsSize) {
    int farthest=0;
    int jumps = 0;
    int currentJumpEnd=0;
    for(int i = 0 ; i < numsSize-1 ; i++){
        farthest = (farthest>i+nums[i])?farthest:i+nums[i];
        if (i==currentJumpEnd){
            jumps++;
            currentJumpEnd = farthest;
        }
        if(currentJumpEnd >= numsSize-1){
            break;
        }
    }
    return jumps;
}