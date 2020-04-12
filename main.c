#include <stdio.h>
#include <string.h>
#define STR_LEN 20
#define STR_NUM 5

int main() {

    char strArr[5][STR_LEN];
    char tempStr[STR_LEN];
    int i, j;

    for (i = 0; i < STR_NUM; i++)
    {
        printf("INPUT String %d : ", i+1);
        gets(strArr[i]);
    }

    for(i=0; i<STR_NUM-1; i++)
    {
        for(j=0; j<(STR_NUM-i)-1; j++)
        {
            if(strlen(strArr[j]) > strlen(strArr[j+1]))
            {
                strcpy(tempStr, strArr[j]);
                strcpy(strArr[j], strArr[j+1]);
                strcpy(strArr[j+1], tempStr);
            }
        }
    }

    for(i=0; i<STR_NUM; i++)
        puts(strArr[i]);
    
    return 0;
}

