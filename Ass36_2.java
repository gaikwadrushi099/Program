import java.util.*;

class Pattern
{
    public void Display(int iCol, int iRow)
    {
        int i = 0, j = 0;
        char ch = 'A';

        for(i = 1; i <= iRow; i++)
        {
            ch = 'A';
            for(j = 1; j <=iCol; j++)
            {
                if((i % 2)== 0)
                {
                    ch = Character.toLowerCase(ch);
                }
                System.out.print(ch+"\t");
                ch++;
            }
             System.out.println();
        }
    }
}

class Ass36_1
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