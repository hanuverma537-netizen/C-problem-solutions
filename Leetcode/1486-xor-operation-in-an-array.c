/*
Problem: XOR Operation in an Array
Link: https://leetcode.com/problems/xor-operation-in-an-array/description/
Description: You are given an integer n and an integer start.

Define an array nums where nums[i] = start + 2 * i (0-indexed) and n == nums.length.

Return the bitwise XOR of all elements of nums.
*/

#include<stdio.h>
int xorOperation(int n, int start) {
    int arr[n], result = 0;
    for (int i=0; i<n; i++) {
        arr[i] = start + 2 * i;
        result ^= arr[i];
    }
    return result;
}
int main() {
    int n, start;
    scanf("%d %d", &n, &start);
    printf("%d", xorOperation(n, start));
    return 0;
}