/*
Problem: Find Greatest Common Divisor of Array
Link: https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/
Description: Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.
*/

#include<stdio.h>
int findGCD(int* nums, int numsSize) {
    int max, min;
    max = min = nums[0];
    for(int i=0; i<numsSize; i++) {
        if (nums[i] > max) max = nums[i];
        else if (nums[i] < min) min = nums[i];
    }
    if (max == min) return max;
    for (int i = min; i > 0; i--) {
        if (max % i == 0 && min % i == 0) return i;
    }
    return 1;
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d", findGCD(nums, numsSize));
    return 0;
}
