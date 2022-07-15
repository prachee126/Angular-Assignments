import java.util.Scanner;
import java.util.*;

public class Program137
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter String");
        String str=sobj.nextLine();
        str=str.toLowerCase();
        char arr[]=str.toCharArray();
        int occ[]=new int[26];
        for(int i=0;i<arr.length;i++)
        {
            occ[arr[i]-97]++;//a-> 97-97=0//occ[0]++
            //b-> 98-97=1//occ[1]++
            //a-> 97-97=0//occ[0]++
            //k-> 107-97=10//occ[10]++ 
            
            
        }
        for(int i=0;i<occ.length;i++)
        {
            System.out.println(occ[i]);
        }
    }
}