/*
Problem: Sort Colors
Link: https://leetcode.com/problems/sort-colors/description/
Description: Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/

#include<stdio.h>
#include<stdlib.h>
void sortColors(int* nums, int numsSize) {
    int j, temp;
    for(int i=0; i<numsSize; i++) {
        temp = nums[i];
        j = i-1;
        while(j>=0 && nums[j] > temp) {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = temp;
    }
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int *nums = malloc(numsSize * sizeof(int));
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    sortColors(nums, numsSize);
    for(int i=0; i<numsSize; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}