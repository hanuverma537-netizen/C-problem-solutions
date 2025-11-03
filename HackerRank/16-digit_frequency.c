/*
Problem: Digit Frequency
Link: https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?isFullScreen=true
Description: Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char *sen;
    int freq[10] = {0};
    sen = malloc(1024 * sizeof(char));
    scanf("%[^\n]", sen);
    sen = realloc(sen, strlen(sen)+1);
    for (int i=0; i<strlen(sen); i++) {
        if (sen[i] >= '0' && sen[i] <= '9') {
            freq[sen[i] - '0']++;
        }
    }
    for (int i=0; i<10; i++) {
        printf("%d ", freq[i]);
    }
    free(sen);
    return 0;
}