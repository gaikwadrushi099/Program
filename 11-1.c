#include<stdio.h>
void  DisplayRange(int iNo1, int iNo2)
{
    int iCnt = iNo1;
   for(iCnt = iNo1; iCnt<=iNo2; iCnt++ )
   {
        printf("%d\n",iCnt);
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

     DisplayRange(iValue);
    
    return 0;
}