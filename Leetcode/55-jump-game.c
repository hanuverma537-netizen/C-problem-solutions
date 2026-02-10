/*
Problem: Jump Game
Link: https://leetcode.com/problems/jump-game/description/
Description: You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.
*/

#include<stdio.h>
#include<stdbool.h>
bool canJump(int* nums, int numsSize) {
    int maxReach = 0;
    for (int i=0; i<numsSize; i++) {
        if (i <= maxReach) {
            if (i+nums[i] >= maxReach) maxReach = i+nums[i];
        }
        else return false;
    }
    return true;
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    (canJump(nums, numsSize)) ? printf("true") : printf("false");
    return 0;
}