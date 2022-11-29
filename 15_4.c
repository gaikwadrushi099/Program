#include<stdio.h>
#include<stdlib.h>
//#include<stdbool.h>

int Check(int Arr[], int iSize)
{
    
    int iCnt = 0, iAns = 0;
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt]) == 11)
        {
            iAns++;
        }
    }
     return iAns;
    
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iLength = 0; 
    int iRet = 0;

    printf("How Many element you want to store:\n");
    scanf("%d",&iLength);

    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Please enter elements\n");
    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Check(ptr,iLength);
    printf("%d\n",iRet);

    free(ptr);

    return 0;


}