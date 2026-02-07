/*
Problem: Length of Last Word
Link: https://leetcode.com/problems/length-of-last-word/description/
Description: Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int lengthOfLastWord(char* s) {
    int count = 0;
    int length = strlen(s);
    for(int i = length - 1; i >= 0; i--) {
        if(s[i] != ' ') {
            for(int j = i; j >= 0; j--) {
                if(s[j] != ' ') count++;
                else return count;
            }
            return count;
        }
    }
    return 0;
}
int main() {
    char *s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    printf("%d", lengthOfLastWord(s));
    return 0;
}