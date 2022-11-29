#include<stdio.h>

void Display( int iRow, int iCol)
{
    int iCnt = 0;
    int i = 0;
    
    for(iCnt = iRow ; iCnt>0 ; iCnt--)
    {
         for(i = iCol; i>0; i--)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of Row:\n");
    scanf("%d",&iValue1);
    printf("Enter Numer of Coloumb:\n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}