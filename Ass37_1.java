import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        
        for(int i = 1; i<= iCol; i++)
        {
            for(int j = 1; j<= iRow; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
        
    }

}
class Ass37_1
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