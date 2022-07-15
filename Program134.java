import java.util.Scanner;

public class Program134
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

    }
    
}
