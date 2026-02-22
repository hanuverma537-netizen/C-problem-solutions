/*
Problem: Count Odd Numbers in an Interval Range
Link: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/
Description: Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).
*/

#include<stdio.h>
int countOdds(int low, int high) {
    int count = 0;
    for(int i = low; i <= high; i++) {
        if (i % 2 != 0) count++;
    }
    return count;
}
int main() {
    int low, high;
    scanf("%d %d", &low, &high);
    printf("%d", countOdds(low, high));
    return 0;
}