/*
Problem: Pointers in C
Link: https://www.hackerrank.com/challenges/pointer-in-c/problem
Description: Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of  to their sum, and  to their absolute difference.
*/

#include <stdio.h>
void update(int *a,int *b) {
    *a += *b;
    *b = (*a-*b) - *b;
    if(*b < 0) *b = *b * -1;  
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}