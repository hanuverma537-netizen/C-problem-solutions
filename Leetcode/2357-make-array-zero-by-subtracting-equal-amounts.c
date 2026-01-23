/*
Problem: Make Array Zero by Subtracting Equal Amounts
Link: https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/
Description: You are given a non-negative integer array nums. In one operation, you must:

Choose a positive integer x such that x is less than or equal to the smallest non-zero element in nums.
Subtract x from every positive element in nums.
Return the minimum number of operations to make every element in nums equal to 0.
*/

#include<stdio.h>
#include<limits.h>
int minNum(int *nums, int numsSize) {
    int min = 101;
    for(int i=0; i<numsSize; i++) {
        if (nums[i] <= min && nums[i] > 0) {
            min = nums[i];
        }
    }
    return min;
}
int minimumOperations(int* nums, int numsSize) {
    int count = 0;
    while(1) {
        int min = minNum(nums, numsSize);
        if (min == 101) break;
        for(int j=0; j<numsSize; j++) {
            if (nums[j] > 0) {
                nums[j] -= min;
            }
        }
        count++;
    }
    return count;
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d", minimumOperations(nums, numsSize));
    return 0;
}