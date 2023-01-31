import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int iCnt = 1;
        for(int i = 1; i<= iRow; i++)
        {
            for(int j = 1; j<= iCol; j++)
            {
                System.out.print(j+"\t");
                iCnt++;
            }
            System.out.println();
        }
        
    }

}
class Ass37_2
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