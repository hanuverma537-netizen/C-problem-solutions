/*
Problem: Find First and Last Position of Element in Sorted Array
Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
Description: Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.
*/

#include<stdio.h>
#include<stdlib.h>

int leftHalf(int* nums, int numsSize, int target) {
    int low = 0, high = numsSize - 1, mid, ans = -1;
    while(low <= high) {
        mid = low + ((high - low) / 2);
        if(nums[mid] >= target) {
            if(nums[mid] == target) ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}
int rightHalf(int* nums, int numsSize, int target) {
    int low = 0, high = numsSize - 1, mid, ans = -1;
    while(low <= high) {
        mid = low + ((high - low) / 2);
        if(nums[mid] <= target) {
            if(nums[mid] == target) ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *result = malloc(2 * sizeof(int));
    result[0] = leftHalf(nums, numsSize, target);
    result[1] = rightHalf(nums, numsSize, target);
    *returnSize = 2;
    return result;
}
int main() {
    int numsSize, target, returnSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &target);
    int *result = searchRange(nums, numsSize, target, &returnSize);
    for(int i=0; i<returnSize; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}