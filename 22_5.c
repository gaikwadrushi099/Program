#include<stdio.h>

void Display( int iRow, int iCol)
{
    int j = 0;
    int i = 0;
   
    
    for(i = 1; i<= iRow ; i++)
    {
        for(j = 1 ; j<= iCol ; j++)
        {
           if((i==1) || (i == iRow) || (j == 1) || (j== iCol)) 
           {
            printf("%d\t",j);

           }
           else
           {
            printf("*\t");
           }
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