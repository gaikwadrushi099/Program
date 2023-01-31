import java.util.*;

class MarvellousX
{
    public void Reverse(String s)
    {
        char ch;
        String str =" ";
        for(int iCnt = 0; iCnt < s.length();iCnt++)
        {
            ch = s.charAt(iCnt);
            str = ch + str;
        }
        System.out.println("" + str);
    }
   
}
class Ass31_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Plese Enter the String : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();

        obj.Reverse(str);
    }
}