/* 
Problem: Palindrome Number
Link: https://leetcode.com/problems/palindrome-number/
Description: Given an integer x, return true if x is a palindrome, and false otherwise.
*/

#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x) {
    long long revNum = 0;
    for (int temp = x; temp > 0; temp /= 10) {
        int digit = temp % 10;
        revNum = revNum * 10 + digit;
    }
    return revNum == x;
}
int main() {
    int x;
    scanf("%d", &x);
    if (isPalindrome(x)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}