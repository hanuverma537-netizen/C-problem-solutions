/*
Problem: Find Numbers with Even Number of Digits
Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/
Description: Given an array nums of integers, return how many of them contain an even number of digits.
*/

#include<stdio.h>
#include<stdlib.h>
int findNumbers(int* nums, int numsSize) {
    int digit, count=0, count_even=0;
    for (int i=0; i<numsSize; i++) {
        count = 0;
        for(int temp = nums[i]; temp > 0; temp /= 10) {
            digit = temp % 10;
            count++;
        }
        if (count % 2 == 0) count_even++;
    }
    return count_even;
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int *nums = malloc(numsSize * sizeof(int));
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d", findNumbers(nums, numsSize));
    return 0;
}