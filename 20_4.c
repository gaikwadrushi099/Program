#include<stdio.h>

void Display( int iRow, int iCol)
{
    int j = 0;
    int i = 0;
   
    
    for(i = iRow; i>0 ; i--)
    {
        for(j = iCol ; j >0 ; j--)
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