/*
Problem: Single Number
Link: https://leetcode.com/problems/single-number/description/
Description: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.
*/

#include<stdio.h>
#include<stdlib.h>
int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for(int i=0; i<numsSize; i++) {
        result = result ^ nums[i];
    }
    return result;
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int *nums = malloc(numsSize * sizeof(int));
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d", singleNumber(nums, numsSize));
    return 0;
}