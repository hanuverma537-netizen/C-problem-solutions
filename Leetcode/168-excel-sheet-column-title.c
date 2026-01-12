/*
Problem: Excel Sheet Column Title
Link: https://leetcode.com/problems/excel-sheet-column-title/
Description: Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
*/

#include<stdio.h>
#include<stdlib.h>
char* convertToTitle(int columnNumber) {
    char *title = malloc(1024 * sizeof(char));
    int i=0;
    while(columnNumber > 0) {
        columnNumber--;
        title[i] = columnNumber % 26 + 'A';
        columnNumber /= 26;
        i++;
    }
    title[i] = '\0';
    for(int j=0; j< i / 2; j++) {
        char temp = title[j];
        title[j] = title[i-j-1];
        title[i-j-1] = temp;
    }
    return title;
}
int main() {
    int columnNumber;
    scanf("%d", &columnNumber);
    printf("%s",convertToTitle(columnNumber));
    return 0;
}