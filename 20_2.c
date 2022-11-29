#include<stdio.h>

void Display( int iRow, int iCol)
{
    int j = 0;
    int i = 0;
    char ch = 'A';
   
    
    for(i = 1; i<=iRow ; i++)
    {
        for(j = 1 ; j <=iCol ; j++)
        {
            if((i %2) != 0)
            {
                printf("%c\t",(char)(i+64));
            }
            else
            {
                return;
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