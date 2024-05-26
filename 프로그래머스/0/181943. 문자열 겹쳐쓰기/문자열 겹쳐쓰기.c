#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, const char* overwrite_string, int s) {
    char* answer = (char*)malloc(1);
    char* overwriteAnswer = (char*)malloc(1);
    answer = my_string;
    overwriteAnswer = overwrite_string;
    
    int len = strlen(answer);
    int len2 = strlen(overwrite_string);
    for(int i = 0; i < len; i++)
    {
        if(i==s){
            for(int j=0; j<len2; j++){
                answer[i] = overwriteAnswer[j];
                i++;
            }
        }

    }
    
    
    return answer;
}