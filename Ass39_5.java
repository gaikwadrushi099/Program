import java.util.*;

class Pattern
{
    public void Display(String s)
    {
        char Arr[] = s.toCharArray();
        int i = 0, j = 0;

         for(i = 0; i<Arr.length; i++)
        {
            for(j = 0; j< Arr.length; j++)
            {
                if(j>=i)
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print(Arr[j]+"\t");
                }
            }
            System.out.println();
        }

        for(i = 1; i<=Arr.length; i++)
        {
            for(j = Arr.length; j > 0 ; j--)
            {
                if(i<=j)
                {
                    System.out.print("#\t");

                    
                }
                else
                {
                    System.out.print(Arr[j]+"\t");     
               }
            }
            System.out.println();
        }

    }

}
class Ass39_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Plese enter the String.....");
        String str = sobj.nextLine();

        Pattern obj = new Pattern();

        obj.Display(str);

    }
}
