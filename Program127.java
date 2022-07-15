import java.lang.*;
import java.nio.charset.StandardCharsets;
import java.util.*;
import java.io.*;
import java.nio.*;
public class Program127
{
    public static void  main(String a[])
    {
        try
        {
            System.out.println("Enter existing filename");
            Scanner sc=new Scanner(System.in);
            String Fname=sc.nextLine();

            File Fobj=new File(Fname);
            boolean b=Fobj.createNewFile();
             if(b==true)
            {
                System.out.println("created");
            }
            else
            {
                System.out.println("already axist");
            }
            if(Fobj.exists())
            {
                long size=Fobj.length();
                System.out.println("File size:"+size);
                FileInputStream fiobj=new FileInputStream(Fobj);
                byte buffer[]=new byte[100];
                int ret=0;
                int sum=0;
                while((ret=fiobj.read(buffer))!=-1)
                {
                    sum=sum+ret;
                    String s=new String(buffer,StandardCharsets.UTF_8);
                    System.out.println(s);
                }
                
                
                
            }
            else
            {
                System.out.println("there is no such file");
            }

        }
        catch(Exception e)
        {
            System.out.println("IOEXCEPTION");
        }

    }    
}
