/*
Problem: Valid Elements in an Array
Link: https://leetcode.com/problems/valid-elements-in-an-array/
Description: You are given an integer array nums.

An element nums[i] is considered valid if it satisfies at least one of the following conditions:

It is strictly greater than every element to its left.
It is strictly greater than every element to its right.
The first and last elements are always valid.

Return an array of all valid elements in the same order as they appear in nums.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findValidElements(int* nums, int numsSize, int* returnSize) {
    int index = 1;
    *returnSize = numsSize;
    int *arr = malloc(numsSize * sizeof(int));
    arr[0] = nums[0];
    if (numsSize == 1) return arr;
    for(int i=1; i<numsSize - 1; i++) {
        bool left = true, right = true;
        for(int j=0; j<i; j++) {
            if (nums[j] >= nums[i]) {
                left = false;
                break;
            }
        }
        for (int j=i + 1; j<numsSize; j++) {
            if (nums[j] >= nums[i]) {
                right = false;
                break;
            }
        }
        if(left || right) {
            arr[index++] = nums[i];
        }
    }
    arr[index++] = nums[numsSize - 1];
    *returnSize = index;
    return arr;
}
int main() {
    int numsSize, returnSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int *result = findValidElements(nums, numsSize, &returnSize);
    for(int i=0; i<returnSize; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}