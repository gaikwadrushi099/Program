import java.util.*;

class Digitx
{
    public int Digitx(int iNo)
    {
        int iDigit = 0, iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit > 3) && (iDigit < 7))
            {
                iSum++;
            }
            //iSum = iSum * iDigit;
            iNo = iNo / 10;
        }
        return iSum;
    }
}

class Ass33_3
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