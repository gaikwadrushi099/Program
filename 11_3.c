#include<stdio.h>
int DisplayRange(int iNo1, int iNo2)
{
   int iCnt = iNo1;
   int iAns = 0;

   if(iNo1 > iNo2)
   {
        printf("Invalid Range\n");
   }
    if(iNo1 <0)
   {
        printf("Invalid Range\n");
   }
   for(iCnt = iNo1; iCnt<=iNo2; iCnt++ )
   {
        if(iNo1 > 0)
        {
            iAns = iAns + iCnt;
        }
   }
   return iAns;
  }

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet  = 0;

    printf("Plese enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Plese enter Ending point:\n");
    scanf("%d",&iValue2);

    iRet = DisplayRange(iValue1, iValue2);
    printf("%d\n",iRet);
    
    return 0;
}