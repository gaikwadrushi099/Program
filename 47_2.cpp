#include<iostream>
using namespace std;

template <class T>
T Maximum(T No1, T No2, T No3)
{
    if(No1 > No2 && No1 > No3)
    {
        cout<<"The maximum No is : "<<No1<<"\n";
    }
    else if(No2 > No3 && No2 >No1)
    {
        cout<<"The maximum No is : "<<No2<<"\n";
    }
    else
    {
         cout<<"The maximum No is : "<<No3<<"\n";
    }
}

int main()
{
    int iRet = 0;
    Maximum(10,20,30);

    float fRet = 0.0;
    Maximum(11.1f,22.2f,100.3f);

    return 0;
}