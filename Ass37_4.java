import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int iCnt = 1;
        for(int i = 1; i<= iRow ; i++)
        {
            for(int j = 1; j<= iCol; j++)
            {
                if((j % 2) != 0)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("#\t");
                }
               
                
            }
            System.out.println();
        }
        
    }

}
class Ass37_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of Rows: ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the Number of Column: ");
        int iCol = sobj.nextInt();

        Pattern obj = new Pattern();

        obj.Display(iRow, iCol);
    }
}