/*
Problem: Number of Good Pairs
Link: https://leetcode.com/problems/number-of-good-pairs/description/
Description: Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.
*/

#include<stdio.h>
int numIdenticalPairs(int* nums, int numsSize) {
    int count = 0;
    for (int i=0; i<numsSize; i++) {
        for (int j=0; j<numsSize; j++) {
            if (nums[i] == nums[j] && i<j) {
                count++;
            }
        }
    }
    return count;
}
int main() {
    int numsSize; 
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }  
    printf("%d", numIdenticalPairs(nums, numsSize));
    return 0;
}