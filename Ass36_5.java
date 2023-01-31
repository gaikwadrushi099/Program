import java.util.*;

class Pattern
{
    public void Display(int iCol, int iRow)
    {
        int i = 0, j = 0;
        int iCnt = 1;

        for(i =1; i <=iCol; i++)
        {
            for(j = 1; j <=iRow; j++)
            {
                System.out.print(iCnt+"\t");
                iCnt++;
                
            }
             System.out.println();
        }
    }
}

class Ass36_5
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