#include<iostream>
using namespace std;

template <class T>
T Add(T *Arr, T No)
{
   T i = Arr[0];
    for(int iCnt = 0; iCnt <No; iCnt++)
    {
        if(i > Arr[iCnt])
        {
            i = Arr[iCnt];
        }
    }
    return i;
    
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    int iRet = Add(Arr, 5);
    printf("Maximum Element is : %d",iRet);

    // float Frr[] = {10.1,20.2,30.3,40.4,50.5};
    // float fRet = Add(Frr, 5);
    // printf("Maximum Element is : %f",fRet);

    return 0;
}