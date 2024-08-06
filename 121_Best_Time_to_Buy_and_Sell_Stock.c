int maxProfit(int* prices, int pricesSize) {
    int max = 1e9;
    int profit = 0;
    for(int i = 0 ; i < pricesSize ; i++){
        if(prices[i]<max){
            max = prices[i];
        }
        else if(prices[i] > max && profit < prices[i]-max){
            profit = prices[i]-max;
        }
    }
    return profit;
}