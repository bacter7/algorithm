int compar (const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int findContentChildren(int* g, int gSize, int* s, int sSize){
    int count = 0;
    qsort(g, gSize, sizeof(int), compar);
    qsort(s, sSize, sizeof(int), compar);
    for (int i = 0, j = 0; i < gSize && j < sSize; j++) {
        if (g[i] <= s[j]) {
            i++, count++;
        }
    }
    return count;
}