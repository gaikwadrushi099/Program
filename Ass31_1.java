import java.util.*;

class MarvellousX
{
    public int CapCount(String s)
    {
        int iCnt = 0;

        for(int i = 0; i< s.length();i++)
        {
            if((s.charAt(i) >= 'A') && (s.charAt(i) <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}
class Ass31_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Plese Enter the String : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();

        int iRet = obj.CapCount(str);
        System.out.println("Number of Capital letter count is : " +iRet);
    }
}