/*
Problem: "Hello World" in c from HackerRank
Link: https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true
Description: 
Print "Hello, World!" on the first line and the input string on the next line.
*/

#include <stdio.h>
int main() 
{
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    printf("%s", s); 
    return 0;
}