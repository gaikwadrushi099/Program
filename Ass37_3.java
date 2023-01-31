import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int iCnt = 1;
        for(int i = iRow; i> 0; i--)
        {
            for(int j = iCol; j> 0; j--)
            {
                System.out.print(j+"\t");
                iCnt++;
            }
            System.out.println();
        }
        
    }

}
class Ass37_3
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