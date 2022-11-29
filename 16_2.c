#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt =0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)   
        {
            break;
        }
    }
    
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to findout the index of first occurance : \n");
    scanf("%d",&iValue);

    iRet = CheckOccurance(ptr, iLength, iValue);
    if(iRet == -1)
    {
        printf("there is no such a number\n");
    }
    else
    {
         printf("First occorance of number is %d\n",iRet);
    }

    free(ptr);

    return 0;
}