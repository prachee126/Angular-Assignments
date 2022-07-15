public import java.io.*;
import java.util.*;

class program323
{
    public static void main(String arg[])
    {
            int i =0, j = 0;
           Scanner sobj = new Scanner(System.in);

           System.out.println("Enter number of rows");
           int irow = sobj.nextInt();

           System.out.println("Enter number of columns");
           int icol = sobj.nextInt();

           int Arr[][] = new int[irow][icol];

           System.out.println("Enter the elements");
           int sum=0;
           for(i = 0; i < Arr.length; i++)
           {
                for(j = 0; j < Arr[i].length; j++)
                {
                    Arr[i][j] = sobj.nextInt();
                }
           }

           for(i = 0; i < Arr.length; i++)
           {
                for(j = 0; j < Arr[i].length; j++)
                {

                        if(i==j)
                        sum=sum+Arr[i][j];
                    
                    System.out.println("addition of diagonal:"+sum);
                    sum=0;
                }
                
           }
          
     }
} 
    

