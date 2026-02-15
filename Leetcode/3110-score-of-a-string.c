/*
Problem: Score of a String
Link: https://leetcode.com/problems/score-of-a-string/description/
Description: You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.

Return the score of s.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int scoreOfString(char* s) {
    int length = strlen(s);
    int sum = 0;
    for(int i=0; i < length - 1; i++) {
        sum += abs(s[i] - s[i + 1]);
    }
    return sum;
}
int main() {
    char *s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    printf("%d", scoreOfString(s));
    free(s);
    return 0;
}