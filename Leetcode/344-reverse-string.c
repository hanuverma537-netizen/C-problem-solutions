/*
Problem: Reverse String
Link: https://leetcode.com/problems/reverse-string/
Description: Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.
*/

#include<stdio.h>
#include<string.h>
void reverseString(char* s, int sSize) {
    for (int i=0; i<sSize / 2; i++) {
        char temp = s[i];
        s[i] = s[sSize - i - 1];
        s[sSize - i - 1] = temp;
    }
}
int main() {
    char s[100000];
    scanf("%[^\n]", s);
    reverseString(s, strlen(s));
    printf("%s", s);
    return 0;
}