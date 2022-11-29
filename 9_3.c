#include<stdio.h>

int Evenfactors(int iNo)
{
    int iCnt= 0;
    int iAns = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
        //iAns = iAns * iCnt;
        
        if((iCnt % 2)==0)
        {
            iAns = iAns * iCnt;
            printf("%d\n",iCnt);
        }
   }
   
   return iAns;
    
}

int main()
{
    int iValue = 0;
    int iRet  = 0;
    printf("Plese enter Number :\n");
    scanf("%d",&iValue);

    iRet = Evenfactors(iValue);
   printf("factors are : %d",iRet);
    
   return 0;
}