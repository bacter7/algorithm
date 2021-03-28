int numDecodings(char * s){
    int length = strlen(s);
    int dp[length + 1], i;
    memset(dp,0,sizeof(int)*(length + 1));
    if (s[0] == '0') {
        return 0;
    }
    dp[0] = 1;
    if (s[length - 1] != '0') {
        dp[1] = 1;
    }
    for (i = 2; i <= length; i++) {
        if (s[length - i] == '0') {
            continue;
        }
        int tmp = (s[length - i] - '0') * 10 + (s[length - i + 1] - '0');
        if (tmp <= 26 && tmp) {
            dp[i] = dp[i]+dp[i-2];
        }
        dp[i] = dp[i] + dp[i-1];
    }
    return dp[length];
}