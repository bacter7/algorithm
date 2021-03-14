int removeDuplicates(int* nums, int numsSize){
    if (!nums || numsSize <= 1) return numsSize;
    int slow = 0;
    int fast = 1;
    while (fast < numsSize) {
        if (nums[slow] != nums[fast]) {
            nums[slow+1] = nums[fast++];
            slow++;
        } else {
            fast++;
        }
    }
    return slow+1;
}