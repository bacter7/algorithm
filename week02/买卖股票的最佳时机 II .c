int maxProfit(int* prices, int pricesSize){
    int ans = 0;
    for (int i = 0; i < pricesSize - 1; i++) {
        if (prices[i+1] > prices[i]) {
            ans = ans + (prices[i+1] - prices[i]);
        }
    }
    return ans;
}