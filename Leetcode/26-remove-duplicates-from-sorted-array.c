/*
Problem: Remove Duplicates from Sorted Array
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
Description: Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.
*/

#include<stdio.h>
int removeDuplicates(int* nums, int numsSize) {
    int i=0;
    while(i<numsSize - 1) {
        if(nums[i] == nums[i+1]) {
            for(int j=i; j<numsSize - 1; j++) {
                nums[j] = nums[j+1];
            }
            numsSize--;
        }
        else i++;
    }
    return numsSize;
}
int main() {
    int numsSize; 
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    numsSize = removeDuplicates(nums, numsSize);
    for(int i=0; i<numsSize; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}