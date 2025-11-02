/*
Problem: Pattern Printing using loops
Link:https://www.hackerrank.com/challenges/printing-pattern-2/problem
Description: Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space.

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

#include <stdio.h>
int main() 
{
    int n, i, j;
    scanf("%d", &n);
  	for (i=0; i<(2*n)-1; i++) {
        for (j=0; j<(2*n)-1; j++) {
            int min = i<j ? i : j;
            if (min > (2*n)- 2 - i) {
                min = (2*n)- 2 - i;
            }
            if (min > (2*n)- 2 - j) {
                min = (2*n)- 2 - j;
            }
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}