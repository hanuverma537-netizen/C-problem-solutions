/*
Problem: Count Indices With Opposite Parity
Link: https://leetcode.com/problems/count-indices-with-opposite-parity/
Description: You are given an integer array nums of length n.

The score of an index i is defined as the number of indices j such that:

i < j < n, and
nums[i] and nums[j] have different parity (one is even and the other is odd).
Return an integer array answer of length n, where answer[i] is the score of index i.
*/

#include<stdio.h>
#include<stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countOppositeParity(int* nums, int numsSize, int* returnSize) {
    int *score = malloc(numsSize * sizeof(int));
    for(int i=0; i<numsSize; i++) {
        int indexScore = 0;
        if (nums[i] % 2 == 0) {
            for(int j=i + 1; j<numsSize; j++) {
                if (nums[j] % 2 != 0) indexScore++;
            }
            score[i] = indexScore;
        }
        else {
            for(int j=i + 1; j<numsSize; j++) {
                if (nums[j] % 2 == 0) indexScore++;
            }
            score[i] = indexScore;
        }
    }
    *returnSize = numsSize;
    return score;
}
int main() {
    int numsSize, returnSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int *result = countOppositeParity(nums, numsSize, &returnSize);
    for(int i=0; i<returnSize; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}