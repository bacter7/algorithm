int leastInterval(char* tasks, int tasksSize, int n){
    int freq[26];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < tasksSize; i++) {
        freq[tasks[i] - 'A']++;
    }

    // 最多的执行次数
    int maxExec = 0;
    for (int i = 0; i < 26; i++) {
        maxExec = fmax(maxExec, freq[i]);
    }
    // 具有最多执行次数的任务数量
    int maxCount = 0;
    for (int i = 0; i < 26; i++) {
        if (maxExec == freq[i]) {
            maxCount++;
        }
    }
    return fmax((maxExec - 1) * (n+1) + maxCount, tasksSize);
}