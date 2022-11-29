#include<stdio.h>
   
void Display( int iRow, int iCol)
{
    int iCnt = 0;
    int i = 0;
    
    for(iCnt = 1 ; iCnt<=iRow ; iCnt++)
    {
         for(i = 1; i <= iCol; i++)
         {
            printf("%d\t",iCnt);
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