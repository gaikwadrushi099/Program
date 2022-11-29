#include<stdio.h>

int  DisplayEvenOddDigits(int iNo)
{
    int iOddCnt = 0, iDigit = 0; 

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iOddCnt++;
        }
        iNo = iNo / 10;
    }return iOddCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);
    iRet = DisplayEvenOddDigits(iValue);
    printf("%d",iRet);
    
    return 0;
}

// 08988
