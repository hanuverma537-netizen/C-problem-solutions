/*
Problem: Goal Parser Interpretation
Link: https://leetcode.com/problems/goal-parser-interpretation/description/
Description: You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *interpret(char * command){
    int length = strlen(command), i = 0;
    while(i<length) {
        if (command[i] == '(' && command[i+1] == ')') {
            command[i] = 'o';
            for(int j=i+1; j < length; j++) {
                command[j] = command[j+1];
            }
            length--;
        }
        else if (command[i] == '(' && command[i+1] == 'a') {
            for(int j=i; j < length; j++) {
                command[j] = command[j+1];
            }
            length--;
            for(int j=i+2; j < length; j++) {
                command[j] = command[j+1];
            }
            length--;
        }
        else i++;
    }
    command[length] = '\0';
    return command;
}
int main() {
    char *command = malloc(1024 * sizeof(char));
    fgets(command, 1024 * sizeof(char), stdin);
    printf("%s", interpret(command));
    return 0;
}