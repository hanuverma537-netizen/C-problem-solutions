/*
Problem: Compute Alternating Sum
Link: https://leetcode.com/problems/compute-alternating-sum/description/
Description: You are given an integer array nums.

The alternating sum of nums is the value obtained by adding elements at even indices and subtracting elements at odd indices. That is, nums[0] - nums[1] + nums[2] - nums[3]...

Return an integer denoting the alternating sum of nums.
*/

#include<stdio.h>
int alternatingSum(int* nums, int numsSize) {
    int sum = 0;
    for(int i=0; i<numsSize; i++) {
        (i % 2 == 0) ? (sum += nums[i]) : (sum -= nums[i]);
    }
    return sum;
}
int main() {
    int numsSize; 
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d", alternatingSum(nums, numsSize));
    return 0;
}