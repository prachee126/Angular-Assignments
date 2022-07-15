import java.util.Scanner;

public class Program133
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter String");
        String str=sobj.nextLine();
        char arr[]=str.toCharArray();
        int k=0;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]>='a' && arr[i]<='z')
            {
                k++;
                System.out.println(arr[i]);
            }
           
        }
        if(k==0)
        {
                System.out.println("not found");
        }
    }
    
}
