#include<stdio.h>
void DisplayRangeRev(int iNo1, int iNo2)
{
    int iCnt = iNo2;
    if(iNo1>iNo2)
    {
        printf("Invalid Range\n");
    }
    for(iCnt = iNo2; iCnt>=iNo1; iCnt--)
    {
       printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("Plese enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Plese enter Ending point:\n");
    scanf("%d",&iValue2);

    DisplayRangeRev(iValue1, iValue2);
    return 0;
}