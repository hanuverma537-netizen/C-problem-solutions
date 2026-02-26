/*
Problem: Missing Number
Link: https://leetcode.com/problems/missing-number/description
Description: Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
*/

#include<stdio.h>
int missingNumber(int* nums, int numsSize) {
    int x = 0;
    for(int i=0; i<=numsSize; i++) x ^= i;
    for (int i=0; i<numsSize; i++) x ^= nums[i];
    return x;
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d", missingNumber(nums, numsSize));
    return 0;
}
