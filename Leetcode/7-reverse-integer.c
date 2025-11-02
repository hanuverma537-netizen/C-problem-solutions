/*
Problem: Reverse Integer
Link: https://leetcode.com/problems/reverse-integer/description/
Description: Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
*/

#include<stdio.h>
#include<limits.h>
int reverse(int x){
    long r=0, t=x;
    while (t!=0) {
        r = r * 10 + (t % 10);
        if (r > INT_MAX || r < INT_MIN) return 0; 
        t /= 10;     
    }
    return (int)r;
}
int main() {
    int x;
    scanf("%d", &x);
    int revNum = reverse(x);
    printf("%d", revNum);
    return 0;
}