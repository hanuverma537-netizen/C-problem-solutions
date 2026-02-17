/*
Problem: Longest Common Prefix
Link: https://leetcode.com/problems/longest-common-prefix/description/
Description: Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    char *common = malloc(1024 * sizeof(char));
    int j = 0;
    while(strs[0][j] != '\0') {
        char current = strs[0][j];
        if (current == '\0') break;
        for(int i=0; i<strsSize; i++) {
            if (strs[i][j] != current) {
                common[j] = '\0';
                return common;
            }
        }
        common[j] = current;
        j++;
    }
    common[j] = '\0';
    return common;
}
int main() {
    int strsSize;
    scanf("%d", &strsSize);
    getchar();
    char **strs = malloc(strsSize * sizeof(char *));
    for(int i = 0; i < strsSize; i++) {
        strs[i] = malloc(100 * sizeof(char));
        scanf("%[^\n]", strs[i]);
        getchar();
    }
    char *result = longestCommonPrefix(strs, strsSize);
    printf("%s", result);
}
