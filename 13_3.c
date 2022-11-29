#include<stdio.h>


int CountRange(int iNo)
{
    int iCnt = 0, iDigit = 0;
    int iAns = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(((iDigit >3) == 0) && (iDigit < 7) == 0)
        {
            return iDigit;
        }
        iNo = iNo / 10;
        iCnt++;
    }
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

   iRet = CountRange(iValue);
   printf("%d\n",iRet);
    
    return 0;
}

// 08988
