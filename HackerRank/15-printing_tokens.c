/*
Problem: Printing Tokens
Link: https://www.hackerrank.com/challenges/printing-tokens-/problem?isFullScreen=true
Description: Given a sentence, s, print each word of the sentence in a new line.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for (int i=0; i<strlen(s); i++) {
        (s[i] == ' ') ? printf("\n") : printf("%c", s[i]);   
    }
    free(s);
    return 0;
}