import java.util.Scanner;
import java.util.*;

public class Program136
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter String");
        String str=sobj.nextLine();
        
        String newstr=str.replaceAll("\\s+"," ");
        String newstr2=newstr.trim();
        
        String arr[]=newstr2.split(" ");
        
        System.out.println("number of words"+arr.length);
        StringBuffer finalstr=new StringBuffer();
        for(int i=0;i<arr.length;i++)
        {
            StringBuffer sb=new StringBuffer(arr[i]);
            finalstr.append(sb.reverse().append(" "));

        }
    
        System.out.println(finalstr);
        String finalstr2=new String(finalstr);
        finalstr2.trim();
    }
    
}
