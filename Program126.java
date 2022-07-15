import java.lang.*;
import java.util.*;
import java.io.*;

public class Program126
{
    public static void  main(String a[])
    {
        try
        {
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
                BufferedReader bobj=new BufferedReader(new FileReader(Fobj));
                String str=null;
                while((str=bobj.readLine())!=null)
                {
                    System.out.println(str);
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
