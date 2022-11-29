#include<stdio.h>
#include<stdbool.h>

void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return ;
    }   
    int iCnt = 0;
    for(iCnt = 1; iCnt<iNo / 2; iCnt++)
    printf("number is:\n");
}

int main()
{
   int iValue = 0;
  

   printf("Enter one Number :\n");
   scanf("%d",&iValue);

    PrintEven(iValue);
 
    return 0;
}