import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            System.out.println("Enter the elements :"+(iCnt +1));
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Element of array is : ");

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public int Addition()
    {
        int iSum1 = 0;
        int iSum2 = 0;

        for(int iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt] % 2) ==0)
            {
                iSum1 = iSum1 + Arr[iCnt];
            }
        }
        for(int iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt] % 2) !=0)
            {
                iSum2 = iSum2 + Arr[iCnt];
            }
        }
        return iSum1 - iSum2;


    }
}

class Ass32_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("How many element that you want to store :");
        int iSize = sobj.nextInt();

       MarvellousX obj = new MarvellousX(iSize);

        obj.Accept();
        obj.Display();
        int iRet = obj.Addition();
        System.out.println("Difference is : "+iRet);
    }
}