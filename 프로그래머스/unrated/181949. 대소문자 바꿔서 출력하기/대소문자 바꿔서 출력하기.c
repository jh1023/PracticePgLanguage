#include <stdio.h>
#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    int len = strlen(s1);

    for(int i = 0; i < len; i++)
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z') s1[i] += 32;
        else if(s1[i] >= 'a' && s1[i] <= 'z') s1[i] -= 32;
    }
    /*
    for(int i=0; i<sizeof(s1); i++){
        if(s1[i] >= 65 && s1[i] <= 90)
            s1[i] += 32; //소문자 치환
        else if (s1[i] >= 97 && s1[i] <= 122) // 소문자
            s1[i] -= 32;
    }
    */
    printf("%s\n",s1);

    return 0;
}
