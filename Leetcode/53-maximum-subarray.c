/*
Problem: Maximum Subarray
Link: https://leetcode.com/problems/maximum-subarray/
Description: Given an integer array nums, find the subarray with the largest sum, and return its sum.
*/

#include<stdio.h>
int maxSubArray(int* nums, int numsSize) {
    int maxSum = nums[0], sum = 0;
    for (int i=0; i<numsSize; i++) {
        sum += nums[i];
        if(sum > maxSum) maxSum = sum;
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxSum;
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d", maxSubArray(nums, numsSize));
    return 0;
}