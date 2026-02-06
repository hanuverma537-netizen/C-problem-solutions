/*
Problem: Difference Between Element Sum and Digit Sum of an Array
Link: https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/
Description: You are given a positive integer array nums.

The element sum is the sum of all the elements in nums.
The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.
Return the absolute difference between the element sum and digit sum of nums.

Note that the absolute difference between two integers x and y is defined as |x - y|.
*/

#include<stdio.h>
int differenceOfSum(int* nums, int numsSize) {
    int sum = 0, digitSum = 0;
    for(int i=0; i<numsSize; i++) {
        sum += nums[i];
        for(int temp = nums[i]; temp > 0; temp /= 10) {
            digitSum += temp % 10;
        }
    }
    int diff = sum - digitSum;
    return ((diff) > 0) ? (diff) : ((diff) * -1);
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d", differenceOfSum(nums, numsSize));
    return 0;
}