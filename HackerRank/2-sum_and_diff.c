/*
Problem: Sum and Difference of Two numbers
Link: http://hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true
Description: Given 2 integers and 2 float values, find their sum and difference respectively
*/

#include <stdio.h>
int main()
{
	int num_1, num_2;
    float fnum_1, fnum_2;
    scanf("%d %d", &num_1, &num_2);
    scanf("%f %f", &fnum_1, &fnum_2);
    printf("%d %d\n", num_1+num_2, num_1-num_2);
    printf("%.1f %.1f", fnum_1+fnum_2, fnum_1-fnum_2);
    return 0;
}