#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    char* answer = (char*)malloc(1);
    sprintf(answer, "%d", n);
    return answer;
}