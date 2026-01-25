/*
Problem: Number of Segments in a String
Link: https://leetcode.com/problems/number-of-segments-in-a-string/description/
Description: Given a string s, return the number of segments in the string.

A segment is defined to be a contiguous sequence of non-space characters.
*/

#include<stdio.h>
int countSegments(char* s) {
    int words = 0;
    for(int i=0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && (i==0 || s[i-1] == ' ')) words++;
    }
    return words;
}
int main() {
    char s[200];
    fgets(s, 200, stdin);
    printf("%d", countSegments(s));
    return 0;
}