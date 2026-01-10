/*
Problem: Search Insert Position
Link: https://leetcode.com/problems/search-insert-position/description/
Description: Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/

#include<stdio.h>
#include<stdlib.h>
int searchInsert(int* nums, int numsSize, int target) {
    int mid, low = 0, high = numsSize-1;
    while(low <= high) {
        mid = (low + high) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        else if(nums[mid] < target) {
            low = mid + 1;
        }
        else if(nums[mid] > target) {
            high = mid - 1;
        }
    }
    return low;
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int *nums = malloc(numsSize * sizeof(int));
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int target;
    scanf("%d", &target);
    printf("%d", searchInsert(nums, numsSize, target));
    free(nums);
    return 0;
}