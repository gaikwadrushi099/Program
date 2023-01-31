import java.util.*;

class ArrayX
{
    public float Arr[];

    public ArrayX(int iSize)
    {
        Arr = new float[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            System.out.println("Enter the Element of Array :");
            Arr[iCnt] = sobj.nextFloat();
        }
        System.out.println();

    }

    public void Display()
    {
        System.out.println("Element of the Array is : ");

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);

        }
        System.out.println();
    }

    public void Percentage()
    {
        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
            if(Arr[iCnt] < 35.00)
            {
                System.out.print("Fail"+"\t");
            }
            else if((Arr[iCnt] > 35.00) && (Arr[iCnt] < 50.00))
            {
                System.out.println("Pass Class");
            }
            else if((Arr[iCnt] > 50.00) && (Arr[iCnt] < 60.00))
            {
                System.out.println("Second Class");
            }
            else if((Arr[iCnt] > 60.00) && (Arr[iCnt] < 70.00))
            {
                System.out.println("First Class");
            }
            else
            {
                System.out.println("First Class With Distingtions");
            }
        }
    }

    
        
    
}

class Ass43_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("How many element that you want to store in Array :");
        int iSize = sobj.nextInt();

        ArrayX obj = new ArrayX(iSize);

        obj.Accept();
        obj.Display();

        obj.Percentage();
    }
}