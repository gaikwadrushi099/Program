import java.util.*;

class Digitx
{
    public int Digitx(int iNo)
    {
        int iDigit = 0, iSum1 = 0;
        int iSum2 =0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iNo % 2) == 0)
            {
               iSum1 = iSum1 + iDigit;
            }
            else if((iNo % 2) != 0)
            {
                iSum2 = iSum2 + iDigit;
            }
            iNo = iNo / 10;
        }
        return iSum1 - iSum2;
        
    }
}

class Ass33_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("Plese enter the Number :");
        int iNo = sobj.nextInt();

        Digitx obj = new Digitx();

        int iRet = obj.Digitx(iNo);
        System.out.println(""+iRet);
    }
}