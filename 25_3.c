#include<stdio.h>

int SmallCount(char *str)
{
    int iCnt1 = 0, iCnt2 = 0; 
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <='z'))  
        {
            iCnt1++;
        }
        else if((*str >= 'A') && (*str <='Z'))
        {
            iCnt2++;
        }
        str++;
    }
    return iCnt1 - iCnt2;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet = SmallCount(Arr);
    printf("%d",iRet);

    return 0;
}
