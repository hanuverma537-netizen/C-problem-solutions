/*
Problem: Product of Array Except Self
Link: https://leetcode.com/problems/product-of-array-except-self/description/
Description: Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.
*/

#include<stdio.h>
#include<stdlib.h>
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *prodArr = malloc(numsSize * sizeof(int)), rightProd = 1;
    prodArr[0] = 1;
    for (int i=1; i<numsSize; i++) {
        prodArr[i] = nums[i - 1] * prodArr[i - 1];
    }
    for (int i=numsSize - 1; i>=0; i--) {
        prodArr[i] *= rightProd;
        rightProd *= nums[i];
    }
    *returnSize = numsSize;
    return prodArr;
}
int main() {
    int numsSize, returnSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int *result = productExceptSelf(nums, numsSize, &returnSize);
    for(int i=0; i<returnSize; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}