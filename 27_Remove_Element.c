int removeElement(int* nums, int numsSize, int val) {
    int temp = numsSize;
    for(int i = 0 ; i < numsSize ; i++){
        if(nums[i] == val){
            nums[i] = -1;
            temp--;
        }
    }
    int t[105]={0};
    int ind = 0;
    for(int i = 0 ; i < numsSize ; i++){
        if(nums[i] == -1)continue;
        else{
            t[ind] = nums[i];
            ind++;
        }
        
    }
    for(int i = 0 ; i < temp ; i++){
        nums[i] = t[i];
    }
    return temp;
}