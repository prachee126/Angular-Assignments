import java.util.Scanner;

public class Program135
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter String");
        String str=sobj.nextLine();
        
        String newstr=str.replaceAll("\\s+"," ");
        String newstr2=newstr.trim();
        
        String arr[]=newstr2.split(" ");
       // int i=0;
        int s=0;
        int large=0;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i].length()>=large);
            {
                large=arr[i].length();
                s=i;
            }
        }
        System.out.println("largest word length "+large+" word is "+arr[s]);

    }
    
}
