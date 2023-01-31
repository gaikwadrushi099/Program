import java.util.*;


class ArrayX
{
    public char Arr[];

    public ArrayX(char ichar)
    {
        Arr = new char[ichar];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        for(int iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            System.out.println("Enter the Charactor :");
            char Arr[] = sobj.nextLine();
        }
        System.out.println();
        
    }

    public void Display()
    {
        System.out.println("Element of the Array is :");
        for(int iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt] +"\t");
            
        }
        System.out.println();
    }
    
}

class Arr43_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the charactor :");
        char iSize = sobj.nextLine();

        ArrayX obj = new ArrayX(iSize);

        obj.Accept();
        obj.Display();
        
        
    }
}