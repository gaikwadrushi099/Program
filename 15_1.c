#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iSize)
{
    int iCnt = 0 ,iAns = 0;
    int iEvenCnt = 0;
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
       if((Arr[iCnt] % 2)== 0) 
       {
            iEvenCnt++;
       }
    }
    return iEvenCnt;
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iLength = 0,iRet = 0;

    printf("How Many element you want to store:\n");
    scanf("%d",&iLength);

    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Please enter elements\n");
    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Display(ptr,iLength);
    printf("Result is : %d\n",iRet);

    free(ptr);

    return 0;


}