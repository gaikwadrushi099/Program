import java.util.*;

class Pattern
{
    public int Arr[];

    public Pattern(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length + " elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
    }

    
    
    public void Display()
    {
        int i = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                i++;
                System.out.print("*"+"\t");
            }
        }
    }
}

class Ass44_1
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("how many element that you want to store :");
        int iSize = sobj.nextInt();

        Pattern obj = new Pattern(iSize);

        obj.Accept();
        obj.Display();
        
    }
}