#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int k) {
    char* answer = (char*)malloc(sizeof(char)*(strlen(my_string)*k+1));
    answer[0] = '\0';
    for(int i=0; i<k; i++)
        strcat(answer, my_string);
    return answer;
}
