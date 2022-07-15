import java.lang.*;
import java.util.*;

public class Program152
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string");
        String str1=sobj.nextLine();
        System.out.println("Enter string");
        String str2=sobj.nextLine();
        
        if(str1.length()!=str2.length())
        {
            return;
        }
        String str3=str1+str1;

        
        if(str3.contains(str2)==true)
        {
            System.out.println("in rotation");
        }
        else
        {
            System.out.println("in rotation");

        }

    }
}
