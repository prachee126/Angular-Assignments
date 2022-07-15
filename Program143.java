
import java.util.*;
import java.lang.*;
import java.io.*;

public class Program143
{
    public static void main(String a[])
    {
        int iRow=0,iCols=0;
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter rows");
        iRow=sobj.nextInt();

        System.out.println("Enter cols");
        iCols=sobj.nextInt();
        ActualLogic AL=new ActualLogic(iRow,iCols);
       AL.AcceptDisplay();

    }
    
}

 class Matrix
{
    public int iRow=0;
    public int iCols=0;
    Scanner sobj=new Scanner(System.in);
    public int Arr[][]=null;
    Matrix(int x,int y)
    {
        this.iRow=x;
        this.iCols=y;
        
        Arr=new int[iRow][iCols];
    }
   
    public void AcceptDisplay()
    {
        
        System.out.println("Enter data:");
        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                Arr[i][j]=sobj.nextInt();
            }
        }

        System.out.println("Your data:");
        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+" ");
            }
            System.out.println();
        }
    }

}

 class ActualLogic extends Matrix
{
    ActualLogic(int x,int y)
    {
        super(x,y);
    }
    
  /*   protected void finalize()
    {
        Arr=null;
        System.gc();
    }
*/
}
