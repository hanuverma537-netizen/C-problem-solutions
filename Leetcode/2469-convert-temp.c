/*
Problem: Convert the Temperature 
Link: https://leetcode.com/problems/convert-the-temperature/
Description: You are given a non-negative floating point number rounded to two decimal places celsius, that denotes the temperature in Celsius.

You should convert Celsius into Kelvin and Fahrenheit and return it as an array ans = [kelvin, fahrenheit].

Return the array ans.
*/

#include<stdio.h>
#include<stdlib.h>
double* convertTemperature(double celsius, int* returnSize) {
    double *ans = malloc(2 * sizeof(double));
    ans[0] = celsius + 273.15;
    ans[1] = celsius * 1.80 + 32.00;
    *returnSize = 2;
    return ans;
}
int main() {
    int returnSize;
    double celsius;
    scanf("%lf", &celsius);
    double* result = convertTemperature(celsius, &returnSize);
    for(int i = 0; i < returnSize; i++) {
        printf("%.5lf ", result[i]);
    }
    free(result);
    return 0;
}