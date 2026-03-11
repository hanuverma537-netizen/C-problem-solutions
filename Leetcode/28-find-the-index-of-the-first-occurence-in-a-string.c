/*
Problem: Find the Index of the First Occurrence in a String
Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
Description: Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/

#include<stdio.h>
#include<string.h>
int strStr(char* haystack, char* needle) {
    char *result = strstr(haystack, needle);
    if (result == NULL) return -1;
    return result - haystack;
}
int main() {
    char haystack[10000], needle[10000];
    scanf("%[^\n]", haystack);
    getchar();
    scanf("%[^\n]", needle);
    printf("%d", strStr(haystack, needle));
    return 0;
}