/*
Problem: Neither Minimum nor Maximum
Link: https://leetcode.com/problems/neither-minimum-nor-maximum/description/
Description: Given an integer array nums containing distinct positive integers, find and return any number from the array that is neither the minimum nor the maximum value in the array, or -1 if there is no such number.

Return the selected integer.
*/

#include<stdio.h>
int findNonMinOrMax(int* nums, int numsSize) {
    int max = nums[0], min = nums[0];
    for(int i=0; i<numsSize; i++) {
        if (nums[i] >= max) max = nums[i];
        else if(nums[i] <= min) min = nums[i];
    }
    for(int i=0; i<numsSize; i++) {
        if(nums[i] != max && nums[i] != min) return nums[i];
        
    }
    return -1;
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d", findNonMinOrMax(nums, numsSize));
    return 0;
}