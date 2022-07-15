import java.util.*;
import java.lang.*;
import java.io.*;
class Program142
{
    public static void main(String a[])
    {
        int iRow=0;
        int iCols=0;
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter rows");
        iRow=sobj.nextInt();

        System.out.println("Enter cols");
        iCols=sobj.nextInt();
        
        int Arr[][]=new int[iRow][iCols];
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
        Arr=null;
        System.gc();
    }
}