/*
Problem: Playing with Characters
Link: https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true
Description: You have to print the character, ch, in the first line. Then print s in next line. In the last line print the sentence, sen.
*/

#include <stdio.h>
int main() 
{
    char c, s[100], sen[100];
    scanf("%c", &c);
    scanf("%s", s);
    scanf(" %[^\n]", sen);
    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s", sen);
    return 0;
}