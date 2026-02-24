/*
Problem: Smallest Index With Equal Value
Link: https://leetcode.com/problems/smallest-index-with-equal-value/description/
Description: Given a 0-indexed integer array nums, return the smallest index i of nums such that i mod 10 == nums[i], or -1 if such index does not exist.

x mod y denotes the remainder when x is divided by y.
*/

#include<stdio.h>
int smallestEqual(int* nums, int numsSize) {
    for (int i=0; i<numsSize; i++) {
        if (i % 10 == nums[i]) return i;
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
    printf("%d", smallestEqual(nums, numsSize));
    return 0;
}