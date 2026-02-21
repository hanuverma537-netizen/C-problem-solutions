/*
Problem: Average Salary Excluding the Minimum and Maximum Salary
Link: https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/
Description: You are given an array of unique integers salary where salary[i] is the salary of the ith employee.

Return the average salary of employees excluding the minimum and maximum salary.
*/

#include<stdio.h>
double average(int* salary, int salarySize) {
    int min = salary[0], max = salary[0], count = 0, sum = 0;
    for(int i=0; i<salarySize; i++) {
        if (salary[i] > max) max = salary[i];
        else if (salary[i] < min)  min = salary[i];
    }
    for(int i=0; i<salarySize; i++) {
        if (salary[i] == max || salary[i] == min) continue;
        else {
            sum += salary[i];
            count++;
        }
    }
    return (double)sum / count;
}
int main() {
    int salarySize;
    scanf("%d", &salarySize);
    int salary[salarySize];
    for(int i=0; i<salarySize; i++) {
        scanf("%d", &salary[i]);
    }
    printf("%lf", average(salary, salarySize));
    return 0;
}