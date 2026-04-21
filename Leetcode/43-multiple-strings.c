/*
Problem: Multiply Strings
Link: https://leetcode.com/problems/multiply-strings/
Description: Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* multiply(char* num1, char* num2) {
    int n = strlen(num1);
    int m = strlen(num2);
    if ((n == 1 && num1[0] == '0') || (m == 1 && num2[0] == '0')) {
        char *zero = malloc(2);
        zero[0] = '0';
        zero[1] = '\0';
        return zero;
    }
    int *res = calloc(n + m, sizeof(int));
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + res[i + j + 1];

            res[i + j + 1] = sum % 10;
            res[i + j] += sum / 10;
        }
    }
    char *result = malloc(n + m + 1);
    int k = 0, i = 0;
    while (i < n + m && res[i] == 0) i++;
    for (; i < n + m; i++) {
        result[k++] = res[i] + '0';
    }
    result[k] = '\0';
    free(res);
    return result;
}
int main() {
    char num1[1024];
    char num2[1024];

    printf("Enter first number: ");
    scanf("%1023s", num1);

    printf("Enter second number: ");
    scanf("%1023s", num2);

    char *result = multiply(num1, num2);

    printf("Product: %s\n", result);

    free(result); // important!
    return 0;
}