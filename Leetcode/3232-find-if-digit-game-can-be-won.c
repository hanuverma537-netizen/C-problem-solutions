/*
Problem: Find if Digit Game can be won
Link: https://leetcode.com/problems/find-if-digit-game-can-be-won/description/
Description: You are given an array of positive integers nums.

Alice and Bob are playing a game. In the game, Alice can choose either all single-digit numbers or all double-digit numbers from nums, and the rest of the numbers are given to Bob. Alice wins if the sum of her numbers is strictly greater than the sum of Bob's numbers.

Return true if Alice can win this game, otherwise, return false.
*/

#include<stdio.h>
#include<stdbool.h>
bool canAliceWin(int* nums, int numsSize) {
    int sumSingle = 0, sumDouble = 0;
    for(int i=0; i<numsSize; i++) {
        if(nums[i] / 10 == 0) {
            sumSingle += nums[i];
        }
        else sumDouble += nums[i];
    }
    if (sumDouble == sumSingle) return false;
    return true; 
}
int main() {
    int numsSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    (canAliceWin(nums, numsSize)) ? printf("true") : printf("false");
    return 0;
}