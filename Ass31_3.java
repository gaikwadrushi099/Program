import java.util.*;

class MarvellousX
{
    public int SmallCount(String s)
    {
        int iCnt = 0;
        int iDiff = 0;

        for(int i = 0; i< s.length();i++)
        {
            if((s.charAt(i) >= 'A') && (s.charAt(i) <= 'Z'))
            {
                iCnt++;
            }
            else 
            {
                iDiff++;
            }
        }
        
                
        return iDiff - iCnt;
    }
}
class Ass31_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Plese Enter the String : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();

        int iRet = obj.SmallCount(str);
        System.out.println("Number of Difference is : " +iRet);
    }
}