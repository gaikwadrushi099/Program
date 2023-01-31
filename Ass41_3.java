import java.util.*;

class MarvellousX
{
    public int Arr[];
    public int Brr[];

    public MarvellousX(int iSize1, int iSize2)
    {
        Arr = new int[iSize1];
        Brr = new int [iSize2];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the first Arrays elements");
            Arr[iCnt] = sobj.nextInt();
        }
        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println("Enter the second Arrays elements");
            Brr[iCnt] = sobj.nextInt();
        }
        System.out.println();
    }

    public void Display()
    {
        System.out.println("Elements of the First Array is :");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
        
        System.out.println("Elements of the Second Array is :");
        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.print(Brr[iCnt]+"\t");
        }
        System.out.println();
    }

    public void DisplayEven()
    {
        for(int iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            if((Arr[iCnt] %2) != 0)
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
        System.out.println();
        for(int iCnt = 0; iCnt< Brr.length; iCnt++)
        {
            if((Brr[iCnt] %2) != 0)
            {
                System.out.print(Brr[iCnt]+"\t");
            }
        }
    }
}

class Ass41_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("how many element that you want to store in first Array : ");
        int iSize1 = sobj.nextInt();

        System.out.println("how many element that you want to sotre in second Array : ");
        int iSize2 = sobj.nextInt();

        

       MarvellousX obj = new MarvellousX(iSize1,iSize2);

       obj.Accept();
       obj.Display();

       obj.DisplayEven();





    }
}