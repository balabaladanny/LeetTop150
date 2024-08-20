int romanToInt(char* s) {
    int flag = 0;
    int ans = 0;
    for(int i = strlen(s)-1 ; i>=0 ; i--){
        if(s[i] == 'I' && flag != 1){
            ans +=1;
        }
        else if(s[i] == 'I' && flag == 1){
            ans -= 1;
        }
        else if(s[i] == 'V'){
            ans +=5;
            flag = 1;
        }
        else if(s[i] == 'X' && flag != 2){
            ans += 10;
            flag = 1;
        }
        else if(s[i] == 'X' && flag == 2){
            ans -= 10;
            //flag = 1;
        }
        else if(s[i] == 'L'){
            ans +=50;
            flag = 2;
        }
        else if(s[i] == 'C' && flag != 3){
            ans+=100;
            flag = 2;
        }
        else if(s[i] == 'C' && flag == 3){
            ans-=100;
            //flag = 2;
        }
        else if(s[i] == 'D'){
            ans+=500;
            flag = 3;
        }
        else if(s[i] == 'M'){
            ans+=1000;
            flag = 3;
        }
    }
    return ans;
}