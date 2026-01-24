/*
Problem: Maximum Number of Words Found in Sentences
Link: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
Description: A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

You are given an array of strings sentences, where each sentences[i] represents a single sentence.

Return the maximum number of words that appear in a single sentence.
*/

#include<stdio.h>
#include<stdlib.h>
int mostWordsFound(char** sentences, int sentencesSize) {
    int max = 0;
    for(int i=0; i<sentencesSize; i++) {
        int count = 1;
        for(int j=0; sentences[i][j] != '\0'; j++) {
            if (sentences[i][j] == ' ') count++;
        }
        if (count > max) max = count;
    }
    return max;
}
int main() {
    int sentencesSize;
    scanf("%d", &sentencesSize);
    getchar();
    char **sentences = malloc(sentencesSize * sizeof(char*));
    for (int i = 0; i < sentencesSize; i++) {
        sentences[i] = malloc(200 * sizeof(char));
        fgets(sentences[i], 200, stdin);
    }
    printf("%d", mostWordsFound(sentences, sentencesSize));
    return 0;
}