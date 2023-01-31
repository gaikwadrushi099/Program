#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int Size;

        public: 
            Array(int value = 10)
            {
                cout<<"Inside Constructor\n";

                this -> Size = value;
                this-> Arr = new int[Size];
            }

            Array(Array &ref)
            {
                cout<<"Inside copy constructor\n";

                this->Size = ref.Size;
                this->Arr = new int [this->Size];

                for(int i = 0; i<Size; i++)
                {
                    this->Arr[i] = ref.Arr[i];
                }
            }

            ~Array()
            {
                cout<<"Inside Destructor\n";

                delete []Arr;
            }

            inline void Accept();
            inline void Display();
};

void Array::Accept()
{
    cout<<"Please enter the values\n";

    for(int i = 0; i<this->Size;i++)
    {
        cin>>Arr[i];
    }
}

void Array :: Display()
{
    cout<<"Element are \n";

    for(int i = 0; i<this->Size; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}

class ArrSearch : public Array
{
    public:
        ArrSearch(int no = 10) : Array(no)
        {}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int Sum();
};

int ArrSearch:: SearchFirst(int value)
{
    int i = 0;

    for(i = 0; i<Size; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }

    if(i == Size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}


int ArrSearch :: EvenCount()
{
    int icout = 0;

    for(int i = 0; i< Size; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            icout++;
        }
        
    }
    return icout;
}


int ArrSearch :: OddCount()
{
    int icout = 0;

    for(int i = 0; i< Size; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            icout++;
        }
        
    }
    return icout;
}


int ArrSearch :: Sum()
{
    int Sum = 0;

    for(int i = 0; i< Size; i++)
    {
        Sum = Sum + Arr[i];       
    }
    return Sum;
}

int ArrSearch:: Frequency(int value)
{
    int iCnt = 0;
    
    for(int i = 0; i< Size; i++)
    {
        if(Arr[i] == value)
        {
            iCnt++;
        }
    }
    return iCnt;
}



int main()
{
    cout<<"Inside Main\n";

    ArrSearch sobj1(5);
    sobj1.Accept();    
    sobj1.Display();

    int iRet = sobj1.Frequency(11);

    cout<<"Frequency is "<<iRet<<"\n";

    iRet = sobj1.SearchFirst(11);
    cout<<"First occurance is "<<iRet<<"\n";

    int aRet = sobj1.EvenCount();
    cout<<"EvenCout is "<<aRet<<"\n";

    int oRet = sobj1.OddCount();
    cout<<"Odd count is : "<<oRet<<"\n";

    int sRet = sobj1.Sum();
    cout<<"Addition of all the element is : "<<sRet<<"\n";

    c

    return 0;
}