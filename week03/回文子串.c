int countSubstrings(char * s){
    char *start = s;
    int num = 0;
    char *p,*q;

    while (*s != '\0') {
        num++;
        p = s + 1, q = s;
        while (q >= start && *p != '\0' && *q == *p) {
            q--, p++, num++;
        }
        p = s + 1, q = s - 1;
        while (q >= start && *p != '\0' && *q == *p) {
            q--, p++, num++;
        }
        s++;
    }
    return num;
}