/*
Problem: Majority Element
Link: https://leetcode.com/problems/majority-element/
Description: Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

#include<stdio.h>
#include<stdlib.h>
int majorityElement(int* nums, int numsSize) {
    int count = 0, temp;
    for(int i=0; i< numsSize; i++) {
        if (count == 0) {
            temp = nums[i];
        }
        temp == nums[i] ? count++ : count--;
    }
    return temp;
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int *nums = malloc(numsSize * sizeof(int));
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d", majorityElement(nums, numsSize));
    return 0;
}