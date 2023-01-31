import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i<= iRow; i++)
        {
            for(j = iCol; j > 0; j--)
            {
                if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
                {
                    System.out.print("*\t");
                }
                else if(i < j )
                {
                    System.out.print("#\t");
                }
                else if(i > j)
                {
                    System.out.print("$\t");
                }
                else 
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
           
        }
    }
}

class Ass40_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter the Number of column :");
        int iCol = sobj.nextInt();

        Pattern obj = new Pattern();

        obj.Display(iRow, iCol);
    }
}
