
#include<stdio.h>
#include<stdbool.h>

bool CHKSpecial(char ch)
{
    if((ch >= '!') && (ch <= '*'))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter one character\n");
    scanf("%c",&cValue);

    bRet = CHKSpecial(cValue);
    if(bRet == true)
    {
        printf("%c is a special charactor\n",cValue);
    }
    else
    {
        printf("%c is not a special charactor\n",cValue);

    }
    return 0;
}