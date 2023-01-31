import java.util.*;

class Pattern
{
    public void Display(int iCol, int iRow)
    {
        int i = 0, j = 0;
        

        for(i = iCol; i > 0; i--)
        {
           
            for(j = 1; j <=iRow; j++)
            {
                System.out.print(i+"\t");
                
            }
             System.out.println();
        }
    }
}

class Ass36_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("Enter the number of Rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter the Number of Column : ");
        int iCol = sobj.nextInt();

        Pattern obj = new Pattern();

        obj.Display(iRow,iCol);
    }
}