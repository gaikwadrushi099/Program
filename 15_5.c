#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5 : Perform the operation on array
int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt =0, iPos = 0;
    //      1           2           3
    for(iCnt = 0; iCnt <= iSize; iCnt++)
    {
        
        if(Arr[iCnt] == iNo)    // 4
        {
            iPos++;
        }
    }
    
    return iPos;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0, iRet = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to findout the freauency : \n");
    scanf("%d",&iValue);

    // Step 4 : Call the function
    iRet = freauency(ptr, iLength, iValue);
    if(iRet == 0)
    {
        printf("%d\n",iRet);
    }
    else
    {
         printf("%d\n",iRet);
    }

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}