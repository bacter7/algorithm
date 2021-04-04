int climbStairs(int n){
    if (n <= 3) {
        return n;
    }
    
    int a = 2, b = 3;
    for (int i = 4; i <= n; i++) {
        b = a + b;
        a = b - 1;
    }
    return b;
}