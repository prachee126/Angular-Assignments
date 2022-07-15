import java.lang.*;
import java.util.*;
public class Program147
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter String");
        String str=sobj.nextLine();
        char arr[]=str.toCharArray();

        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<=i;j++)
            {
                System.out.print(arr[j]+" ");
            }
            System.out.println();
        }
    }
}