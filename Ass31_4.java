import java.util.*;

class MarvellousX
{
    public void Display(String s)
    {
        
        char iAns = {'a','e','i','o','u'};

           if(s.equals(iAns))
            {
                System.out.println("It contains Vowel");
            }
            else
            {
                System.out.println("It not contains vowel");
            }
        
    }
}
class Ass31_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Plese Enter the String : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();

        obj.Display(str);
        
    }
}