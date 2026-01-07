/*
Problem: Binary Search
Description: Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.
Link: https://leetcode.com/problems/binary-search/description/
*/

#include<stdio.h>
int search(int* nums, int numsSize, int target) {
    int mid, low = 0, high = numsSize-1;
    while(low<=high) {
        mid = (low+high) / 2;
        if(nums[mid] == target) return mid;
        if(target > nums[mid]) low = mid + 1;
        if (target < nums[mid]) high = mid - 1;
    }
    return -1;
}
int main() {
    int numsSize, target; 
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &target);
    int pos = search(nums, numsSize, target);
    printf("%d", pos);
    return 0;
}