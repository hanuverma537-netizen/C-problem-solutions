/*
Problem: Running Sum of 1d Array
Link: https://leetcode.com/problems/running-sum-of-1d-array/
Description: Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.
*/

#include<stdio.h>
#include<stdlib.h>
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *runningSum = malloc(numsSize * sizeof(int));
    runningSum[0] = nums[0];
    for (int i=1; i<numsSize; i++) {
        runningSum[i] = runningSum[i-1] + nums[i];
    }
    *returnSize = numsSize;
    return runningSum;
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for (int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int returnSize;
    int *result = runningSum(nums, numsSize, &returnSize);
    for (int i=0; i<returnSize; i++) {
        printf("%d ", result[i]);
    }
    free(result);
    return 0;
}