double myPow(double x, int n){
    if (n == 0) return 1;
    if (n < 0 ) {
        return 1 / (x * myPow(x, -(n + 1)));
    }
    if (0 == (n & 1)) {
        return myPow(x * x, n >> 1);
    } else {
        return x * myPow(x * x, (n - 1) >> 1);
    }
}