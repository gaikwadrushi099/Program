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
    public int CheckOccarance(int iSize ,int iNo)
    {
        int iAns = 0, iCnt = 0;

        for(iCnt = Arr.length -1; iCnt > 0; iCnt--)
        {
            if(Arr[iCnt] == iNo)
            {
                break;   
            }
        }
        
        if(iCnt == -1)
        {
            return -1;
        }
        else
        {
            return iCnt;
        }
    }
}

class Ass34_3
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

        System.out.println("Which Number to find in the Index :");
        int iNo = sobj.nextInt();

        iRet = obj.CheckOccarance(iSize,iNo);
        System.out.println(""+iRet);
       
       
    }
}