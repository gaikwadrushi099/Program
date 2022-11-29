#include<stdio.h>
#include<stdbool.h>

bool CountTwo(int iNo)
{
    int iCnt = 0, iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 0)
        {
           return true;
        }
        else
        {
            return false;
        }
        iCnt++;
    }
    
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = CountTwo(iValue);
    if(bRet == true)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("It not contains zero:");
    }
    
    return 0;
}

// 08988
