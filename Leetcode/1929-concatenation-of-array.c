/*
Problem: Concatenation of Array
Link: https://leetcode.com/problems/concatenation-of-array/
Description: Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

Specifically, ans is the concatenation of two nums arrays.

Return the array ans.
*/

#include <stdio.h>
#include <stdlib.h>
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc((2 * numsSize) * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[i];
        ans[i + numsSize] = nums[i];
    }
    *returnSize = 2 * numsSize;
    return ans;
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int returnSize;
    int* result = getConcatenation(nums, numsSize, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    free(result);
    return 0;
}