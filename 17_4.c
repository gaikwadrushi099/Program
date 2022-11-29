#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0; int isum = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        isum =  isum + Arr[iCnt];
    }
    printf("%d\t",isum);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter %d elements : \n",iLength);

    for(iCnt = 0 ;iCnt< iLength; iCnt++)
    {
        printf("Enter element : %d", iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr, iLength);
    free(ptr);

    return 0;
}