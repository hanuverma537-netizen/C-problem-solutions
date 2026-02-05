/*
Problem: Number of Employees Who Met the Target
Link: https://leetcode.com/problems/number-of-employees-who-met-the-target/description/
Description: There are n employees in a company, numbered from 0 to n - 1. Each employee i has worked for hours[i] hours in the company.

The company requires each employee to work for at least target hours.

You are given a 0-indexed array of non-negative integers hours of length n and a non-negative integer target.

Return the integer denoting the number of employees who worked at least target hours.
*/

#include<stdio.h>
int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int count=0;
    for(int i=0; i<hoursSize; i++) {
        if (hours[i] >= target) {
            count++;
        }
    }
    return count;
}
int main() {
    int hoursSize, target;
    scanf("%d", &hoursSize);
    int hours[hoursSize];
    for(int i=0; i<hoursSize; i++)  {
        scanf("%d", &hours[i]);
    }
    scanf("%d", &target);
    printf("%d", numberOfEmployeesWhoMetTarget(hours, hoursSize, target));
    return 0;
}