/*
Problem: Squares of a Sorted Array
Link: https://leetcode.com/problems/squares-of-a-sorted-array/description/
Description: Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
*/

#include<stdio.h>
#include<stdlib.h>
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *result = malloc(numsSize * sizeof(int));
    for(int i=0; i<numsSize; i++) {
        result[i] = nums[i] * nums[i];
    }
    for(int i=1; i<numsSize; i++) {
        int temp = result[i];
        int j = i - 1;
        while(j >= 0 && result[j] > temp) {
            result[j+1] = result[j];
            j--;
        }
        result[j+1] = temp;
    }
    *returnSize = numsSize;
    return result;
}
int main() {
    int numsSize;
    int returnSize; 
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int *result = sortedSquares(nums, numsSize, &returnSize);
    for(int i=0; i<returnSize; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}