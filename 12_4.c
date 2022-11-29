#include<stdio.h>

int CountTwo(int iNo)
{
    int iCnt = 0, iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("%d\n",iRet);
    
    return 0;
}

// 08988
