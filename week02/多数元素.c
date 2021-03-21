// 数组中只有两个数

// 消除法
int majorityElement(int *nums, int numsSize) {
    int count = 0;
    int aws = nums[0];
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == aws) count++;
        else count--;
        if (count <= 0) aws = nums[i+1];
    }
    return aws;
}

// 排序区中间值
// int compar (const void *a, const void *b) {
//     return *(int *)a -*(int *)b;
// }

// int majorityElement(int* nums, int numsSize){
//     qsort(nums, numsSize, sizeof(int), compar);
//     return nums[numsSize/2];
// }