/*
Problem: Two Sum
Link: https://leetcode.com/problems/two-sum/
Description: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *result = malloc(2 * sizeof(int)); 
    for (int i=0; i<numsSize; i++) {
        for (int j=i+1; j<numsSize; j++) {
            if(target == nums[i] + nums[j]) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;                
                return result;
            }
        }
    }
    *returnSize = 0;
    return 0;
}
int main() {
    int numsSize, returnSize, target;
    scanf("%d", &numsSize);
    int nums[numsSize];
    scanf("%d", &target);
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int *result = twoSum(nums, numsSize, target, &returnSize);
    for(int i=0; i<returnSize; i++) {
        printf("%d ", result[i]);
    }
    free(result);
    return 0;
}