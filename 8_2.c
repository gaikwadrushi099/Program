#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    while(iNo!=0)
    {
        iCnt = (iCnt * 10) + (iNo % 10);
        iNo /=10;
    }
    while (iCnt != 0)
    {
        switch(iCnt % 10)
        {
            case 0:
            printf("ZERO\n");
            break;
            case 1:
            printf("ONE\n");
            break;
            case 2:
            printf("TWO\n");
            break;
            case 3:
            printf("THREE\n");
            break;
            case 4:
            printf("FOUF\n");
            break;
            case 5:
            printf("FIVE\n");
            break;
            case 6:
            printf("SIX\n");
            break;
            case 7:
            printf("SEVEN\n");
            break;
            case 8:
            printf("EIGHT\n");
            break;
            case 9:
            printf("NINE\n");
            break;
        }
        iCnt = iCnt / 10;
    }
    
}
      

int main()
{
    int iValue = 0;
    int Numb = 0;
    printf("Plese enter one number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}