#include<stdio.h>

int CountSmallR(char *str)
{
    static int iCnt = 0;
    static int iAns = 0;

    if(str[iCnt] != '\0')
    {
        if(str[iCnt] == ' ')
        {
            iCnt++;
        }
        str++;
        CountSmallR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmallR(Arr);

    printf("String length is : %d\n",iRet);

    return 0;
}