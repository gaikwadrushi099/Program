#include<stdio.h>
#include<stdbool.h>

void Reverse(int iNo)
{
    int iDigit = 0, iRev =0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    //bool bRet = false;
  printf("Please enter number : \n");
    scanf("%d",&iValue);

    Reverse(iValue);
    return 0;

}