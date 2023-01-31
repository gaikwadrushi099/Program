import java.util.*;

class MarvellousX
{
    public int Arr[];

    public MarvellousX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        for(int iCnt = 0; iCnt< Arr.length;iCnt++)
        {
            System.out.println("Enter the element : "+(iCnt +1));
            Arr[iCnt] = sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("Element of the array is : ");
        
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            
            System.out.print(Arr[iCnt]+"\t");
            

        }
        System.out.println();
        
    }
    public void CheckRange(int iSize ,int iStart, int iEnd)
    {
        int iAns = 0, iCnt = 0;
        

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
        
       
    }
}

class Ass34_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("How many element you can store in array :");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);

        obj.Accept();
        obj.Display();

        int iRet = 0;

        System.out.println("Plese enter the start point of range:");
        int iNo1 = sobj.nextInt();

        System.out.println("Plese enter the end point of range:");
        int iNo2 = sobj.nextInt();

        obj.CheckRange(iSize,iNo1,iNo2);
        
       
    }
}