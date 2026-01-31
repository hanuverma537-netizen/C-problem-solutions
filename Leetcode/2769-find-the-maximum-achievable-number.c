/*
Problem: Find the Maximum Achievable Number
Link: https://leetcode.com/problems/find-the-maximum-achievable-number/
Description: Given two integers, num and t. A number x is achievable if it can become equal to num after applying the following operation at most t times:

Increase or decrease x by 1, and simultaneously increase or decrease num by 1.
Return the maximum possible value of x.
*/

#include<stdio.h>
int theMaximumAchievableX(int num, int t) {
    return num + (2 * t);
}
int main() {
    int num;
    scanf("%d", &num);
    int t;
    scanf("%d", &t);
    printf("%d", theMaximumAchievableX(num, t));
    return 0;
}