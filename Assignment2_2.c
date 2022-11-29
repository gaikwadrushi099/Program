#include<stdio.h>


void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while( iCnt<=iNo)
    {
        printf("*\n");
        iCnt++;
    }
                                                                                                                         
}

int main()
{
   int iValue = 0;

   printf("Enter one Number :\n");
   scanf("%d",&iValue);

   Display(iValue);
 
    return 0;
}