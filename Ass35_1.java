import java.util.*;

class ConcatStrX
{
    public void ConcatStrX(String str1, String str2, int iNo)
    {
        System.out.println(str1+str2+iNo+);
    }
}

class Ass35_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string....");
        String str = sobj.nextLine();

        System.out.println("Enter Second String.....");
        String str1 = sobj.nextLine();

        System.out.println("Enter the Digit....");
        int iNo = sobj.nextInt();
        
        ConcatStrX obj = new ConcatStrX();
        obj.ConcatStrX(str,str1,iNo);
    }
}