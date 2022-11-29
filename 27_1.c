#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
        if(*str != '\0')
        {
            return true;
        }
        else
        {
            return false;
        }
       
    
}

int main()
{
    char Arr[30];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter one String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter one charactor\n");
    scanf(" %c",&cValue);

    bRet = CheckChar(Arr,cValue);
    if(bRet == true)
    {
        printf("Charactor found\n");
    }
    else
    {
        printf("Charactor not found\n");
    }
    return 0;
}