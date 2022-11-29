#include<stdio.h>
#include<stdbool.h>

int CheckChar(char *str, char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
     return iCnt;  
    
}

int main()
{
    char Arr[30];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter one String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter one charactor\n");
    scanf(" %c",&cValue);

    iRet = CheckChar(Arr,cValue);
    
    printf("Charactor frequency is:%d\n",iRet);
    
    return 0;
}