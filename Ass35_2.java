import java.util.*;

class ConcatStrX
{
    public boolean ConcatStrX(String str1, String str2)
    {
        if(str1==str2)
        {
            return true;
        }   
        else
        {
            return false;
        }
    }
}

class Ass35_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string....");
        String str = sobj.nextLine();

        System.out.println("Enter Second String.....");
        String str1 = sobj.nextLine();

        ConcatStrX obj = new ConcatStrX();
        boolean bRet = false;

        bRet = obj.ConcatStrX(str, str1);
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