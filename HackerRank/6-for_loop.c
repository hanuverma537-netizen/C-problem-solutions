/*
Problem: For loop in C
Link: https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true
Description: For each integer n in the interval [a,b] (given as input) :

If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
*/

#include <stdio.h>
int main() 
{
    int a, b;
    char nums[9][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
  	for (int i=a; i<=b; i++) {
        if (i>=1 && i<=9)
            printf("%s\n", nums[i-1]);
        if (i>9) 
            (i % 2 == 0) ? printf("even\n") : printf("odd\n");
    }
    return 0;
}