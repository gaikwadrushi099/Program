#include<stdio.h>
void  DisplayRange(int iNo1, int iNo2)
{
   int iCnt = iNo1;
   if(iNo1 > iNo2)
   {
        printf("Invalid Range\n");
   }
   for(iCnt = iNo1; iCnt<=iNo2; iCnt++ )
   {
         if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    //int iRet  = 0;

    printf("Plese enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Plese enter Ending point:\n");
    scanf("%d",&iValue2);

    DisplayRange(iValue1, iValue2);
    
    return 0;
}