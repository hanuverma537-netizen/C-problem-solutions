/*
Problem: Truncate Sentence
Link: https://leetcode.com/problems/truncate-sentence/description/
Description: A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each of the words consists of only uppercase and lowercase English letters (no punctuation).

For example, "Hello World", "HELLO", and "hello world hello world" are all sentences.
You are given a sentence s​​​​​​ and an integer k​​​​​​. You want to truncate s​​​​​​ such that it contains only the first k​​​​​​ words. Return s​​​​​​ after truncating it.
*/

#include<stdio.h>
char* truncateSentence(char* s, int k) {
    for(int i=0; s[i] != '\0'; i++) {
        if (s[i] == ' ' && --k == 0) {
            s[i] = '\0';
            break;
        }
    }
    return s;
}
int main() {
    char s[500];
    fgets(s, 500, stdin);
    int k;
    scanf("%d", &k);
    printf("%s", truncateSentence(s, k));
    return 0;
}