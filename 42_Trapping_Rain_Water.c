int trap(int* height, int heightSize) {
    if(heightSize<=2)return 0;
    //initialize max_height array
    int (*max_height)[2] = malloc(heightSize * sizeof(*max_height));//[0]_left, [1]_right
    max_height[0][0] = 0;
    max_height[1][0] = height[0];
    max_height[heightSize-1][1] = 0;
    max_height[heightSize-2][1] = height[heightSize-1];
    for(int i = 2 ; i < heightSize ; i++){
        max_height[i][0] = height[i-1]>max_height[i-1][0]? height[i-1]:max_height[i-1][0];
    }
    for(int i = heightSize - 3 ; i >= 0 ; i--){
        max_height[i][1] = height[i+1]>max_height[i+1][1]?height[i+1]:max_height[i+1][1];
    }
    //min(max_right_height, max_left_hight)-curr_height
    int ans = 0;
    for(int i = 0 ; i < heightSize ; i++){
        int temp = max_height[i][0]>max_height[i][1]?max_height[i][1]:max_height[i][0];
        if(temp-height[i]>0)ans+=temp-height[i];
    }
    free(max_height);
    return ans;
}