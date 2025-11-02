/*
Problem: Add digits
Link: https://leetcode.com/problems/add-digits/
Description: Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
*/

#include<stdio.h>
int addDigits(int num) {
    int sum = 0, temp;
    if (num<10) return num;
    for (temp = num; temp > 0; temp /= 10) {
        sum += (temp % 10);
    }
    return addDigits(sum);
}
int main() {
    int num;
    scanf("%d", &num);
    int sumofDigits = addDigits(num);
    printf("%d", sumofDigits);
    return 0;
}