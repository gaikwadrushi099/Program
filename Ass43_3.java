import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iNo)
    {
        Arr = new int[iNo];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        for(int iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            System.out.println("Enter the Element :");
            int Arr = sobj.nextInt();
        }
        System.out.println();

    }

    public void Display()
    {
        System.out.println("Element of the Array is :");
        for(int iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

}

class Ass43_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of Array that you want to store in array :");
        int iSize = sobj.nextInt();

        ArrayX obj = new ArrayX(iSize);

        obj.Accept();
        obj.Display();
    }
}