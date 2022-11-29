#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize)
{
    
    int iCnt = 0; int iAns = 0, iCum = 11;
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt]) == iCum)
        {
            iCum;
        }    
    }  
    if(iCum == 0)
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
    int *ptr = NULL;
    int iCnt = 0, iLength = 0; 
    bool iRet = false;

    printf("How Many element you want to store:\n");
    scanf("%d",&iLength);

    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Please enter elements\n");
    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Check(ptr,iLength);
    if(iRet == true)
    {
        printf("11 is Present\n",iRet);
    }
    else 
    {
        printf("11 is not Present\n",iRet);
    }

    free(ptr);

    return 0;


}