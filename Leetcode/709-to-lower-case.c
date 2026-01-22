/*
Problem: To Lower Case
Link: https://leetcode.com/problems/to-lower-case/
Description: Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.
*/

#include<stdio.h>
char* toLowerCase(char* s) {
    for(int i=0; s[i] != '\0'; i++) {
        if (s[i] >= 65 && s[i] <= 90) s[i] = s[i] + 32;
    }
    return s;
}
int main() {
    char *s;
    fgets(s, 100, stdin);
    printf("%s", toLowerCase(s));
    return 0;
}