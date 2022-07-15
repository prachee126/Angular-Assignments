import MarvellousMatrix.Matrix;
import java.util.*;
import java.lang.*;
import java.io.*;


public class Program144
{
    public static void main(String a[])
    {
        int iRow=0,iCols=0;
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter rows");
        iRow=sobj.nextInt();

        System.out.println("Enter cols");
        iCols=sobj.nextInt();
        MyMatrix Mobj=new  MyMatrix(iRow,iCols);
       Mobj.AcceptDisplay();
       int ret= Mobj.Maximum();
       System.out.println("Maximum: "+ret);
       int min= Mobj.Minimun();
       System.out.println("minimum number: "+min);


       Mobj.SwapRow();
       System.out.println("data after swapping");
       Mobj.Display();

       Mobj.SwapCols();
       System.out.println("data after swapping");
       Mobj.Display();
    }
    
}

class MyMatrix extends Matrix
{
    MyMatrix(int a,int b)
    {
        super(a,b);
    }
     public int Maximum()
    {
        int max=Arr[0][0];
        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                if(Arr[i][j]>max)
                {
                    max=Arr[i][j];
                }
            }
        }
        return max;

    }
    public int Minimun()
    {
        int min=Arr[0][0];
        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                if(Arr[i][j]<min)
                {
                    min=Arr[i][j];
                }
            }
        }
        return min;

    }
    public void SwapRow()
    {
        int temp=0;
        for(int i=0;i<Arr.length-1;i+=2)
        {

            for(int j=0;j<Arr[i].length;j++)
            {  
                temp=Arr[i][j];
                Arr[i][j]=Arr[i+1][j];
                Arr[i+1][j]=temp;

            }
        }
    } 
   
    public void SwapCols()
    {
        int temp=0;
        for(int i=0;i<Arr.length;i++)
        {

            for(int j=0;j<Arr[i].length-1;j+=2)
            {  
                temp=Arr[i][j];
                Arr[i][j]=Arr[i][j+1];
                Arr[i][j+1]=temp;
                
            }
        }
    }
}
