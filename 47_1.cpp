#include<iostream>
using namespace std;

template <class T>
T Multiple(T No1, T No2)
{
    T Ans;
    Ans = No1 * No2;
    return Ans;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0;
    double dRet = 0.0;

    iRet = Multiple(10,20);
    printf("%d\n",iRet);

    fRet = Multiple(10.8f, 20.8f);
    printf("%f\n",fRet);

    dRet = Multiple(20.22,10.22);
    printf("%f\n",dRet);

    return 0;
}