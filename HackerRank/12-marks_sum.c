/*
Problem: Student Marks Sum
Link: https://www.hackerrank.com/challenges/students-marks-sum/problem
Description: You are given an array of integers, marks, denoting the marks scored by students in a class.

The alternating elements marks0, marks2, marks4 and so on denote the marks of boys.
Similarly, marks1, marks3, marks5 and so on denote the marks of girls.

Function Returns:

int: the sum of marks for boys if gender = b, or of marks of girls if gender = g.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int marks_summation(int* marks, int number_of_students, char gender) {
    int sum=0;
    int index = (gender == 'b') ? 0:1;
    for(int i=index; i<number_of_students; i+=2) {
        sum += marks[i];
    }
    return sum;
}
int main() {
    int number_of_students;
    char gender;
    int sum;
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
    return 0;
}