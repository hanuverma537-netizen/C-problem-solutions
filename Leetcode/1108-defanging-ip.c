/*
Problem: Defanging an IP Address
Link: https://leetcode.com/problems/defanging-an-ip-address/
Description: Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * defangIPaddr(char * address){
    int length = strlen(address), j=0;
    char* result = malloc((length*3 + 1) * sizeof(char));
    for(int i=0; i<length; i++) {
        if (address[i] == '.') {
            result[j++] = '[';
            result[j++] = '.';
            result[j++] = ']';
        }
        else {
            result[j++] = address[i];
        }
    }
    result[j] = '\0';
    return result;
}
int main() {
    char address[100];
    scanf("%s", address);
    char *defanged = defangIPaddr(address);
    printf("%s\n", defanged);
    free (defanged);
    return 0;
}