#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int num) {
    char* answer = (char*)malloc(5);

    if (num % 2 == 0) {
        strcpy(answer, "Even"); 
    } else {
        strcpy(answer, "Odd"); 
    }
    
    return answer;
}