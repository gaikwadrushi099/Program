#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if((iNo % 2)==0)
    {
        return true;
    }               
    else
    {
        return false;
    }                                                                                
}

int main()
{
   int iValue = 0;
   bool bRet = 0;

   printf("Enter one Number :\n");
   scanf("%d",&iValue);


   bRet = Check(iValue);
   if(bRet == 0)
   {
    printf("Number is Even\n");
   }
   else
   {
    printf("Number is odd\n");
   }
 
    return 0;
}