#include<iostream>
using namespace std;

template <class T>
T Frequency(T *arr, int iSize, T iNo)
{
    T iCnt = 0;
    for(iCnt = iSize -1; iCnt >=1 ; iCnt--)
    {
        if(arr[iCnt] == iNo)
        {
           break;
        }
    }
    return iCnt;

}

int main()
{
    int arr[] = {10,40,30,10,20,30,10,40,10};
    int iRet = 0;

    iRet = Frequency(arr,9,10);
    printf("%d",iRet);
    

    return 0;
}