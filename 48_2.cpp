#include<iostream>
using namespace std;

template <class T>

int Frequency(T *arr, int iSize, T iNo)
{
    int iCnt = 0;
    int iTemp = 0;
    //int iAns = iNo;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iTemp++;
        }
    }
    return iTemp;
}

int main()
{
    int arr[] = {10,20,30,10,20,30,10,40,10};

    int iRet = Frequency(arr,9,10);
    printf("%d",iRet);

    return 0;
}