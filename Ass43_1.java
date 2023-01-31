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
            System.out.println("Enter the Element of Array :");
            Arr[iCnt] = sobj.nextInt();
        }
        System.out.println();

    }

    public void Display()
    {
        System.out.println("Element of the Array is : ");

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt] +"\t");

        }
        System.out.println();
    }

    public void RevDisplay()
    {
        int iDigit = 0, iNo = Arr.length;
        
        while(iNo > 0)
        {
            iDigit = iDigit % 10;
            System.out.println(iDigit);
            iNo = iNo /10;
        }
        
    }
}

class Ass43_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("How many element that you want to store in Array :");
        int iSize = sobj.nextInt();

        ArrayX obj = new ArrayX(iSize);

        obj.Accept();
        obj.Display();

        obj.RevDisplay();
    }
}