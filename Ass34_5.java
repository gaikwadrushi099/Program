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
    public int Product()
    {
        int iAns = 1, iCnt = 0;
        

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                iAns = iAns * Arr[iCnt];
            }
        }
        return iAns;
       
    }
}

class Ass34_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("How many element you can store in array :");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);

        obj.Accept();
        obj.Display();
       
        int iRet = obj.Product();
        System.out.println(""+iRet);
        
       
    }
}