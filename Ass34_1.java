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
    public boolean CheckFrequency(int iNo)
    {
        int iAns = 0, iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                iAns++;
            }
        }
        if(iAns == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class Ass34_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("How many element you can store in array :");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);

        obj.Accept();
        obj.Display();

        boolean bRet = false;

        System.out.println("Which Number to find in array :");
        int iNo = sobj.nextInt();

        bRet = obj.CheckFrequency(iNo);
        if(bRet == true)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
       
       
    }
}