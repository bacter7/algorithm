int* countBits(int num, int* returnSize){
    int *bits = malloc(sizeof(int) * (num + 1));
    *returnSize = num + 1;
    bits[0] = 0;
    for(int i = 1; i<= num; i++) {
        bits[i] = bits[i >> 1] + (i & 1);
    }
    return bits;
}