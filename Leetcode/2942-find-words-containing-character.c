/*
Problem: Find Words Containing Character
Link: https://leetcode.com/problems/find-words-containing-character/description/
Description: You are given a 0-indexed array of strings words and a character x.

Return an array of indices representing the words that contain the character x.

Note that the returned array may be in any order.
*/

#include<stdio.h>
#include<stdlib.h>
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int count = 0;
    int *result = malloc(wordsSize * sizeof(int));
    for(int i=0; i<wordsSize; i++) {
        for(int j=0; words[i][j] != '\0'; j++) {
            if (words[i][j] == x) {
                result[count++] = i;
                break;
            }
        }
    }
    *returnSize = count;
    return result;
}
int main() {
    int wordsSize, returnSize;
    scanf("%d", &wordsSize);
    getchar();
    char **words = malloc(wordsSize * sizeof(char*));
    for(int i=0; i<wordsSize; i++) {
        words[i] = malloc(100 * sizeof(char));
        fgets(words[i], 100, stdin);
    }
    char x;
    scanf(" %c", &x);
    int *result = findWordsContaining(words, wordsSize, x, &returnSize);
    for(int i=0; i<returnSize; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}