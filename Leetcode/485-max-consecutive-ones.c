/*
Problem: Max Consecutive Ones
Link: https://leetcode.com/problems/max-consecutive-ones/
Description: Given a binary array nums, return the maximum number of consecutive 1's in the array.
*/

#include<stdio.h>
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max = 0, count = 0;
    for(int i=0; i<numsSize; i++) {
        (nums[i] != 1) ? (count = 0) : count++;
        if (count > max) max = count;
    }
    return max;
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d", findMaxConsecutiveOnes(nums, numsSize));
    return 0;
}