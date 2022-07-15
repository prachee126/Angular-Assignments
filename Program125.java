import java.lang.*;
import java.io.*;
import java.util.Scanner;

public class Program125 
{
    public static void main(String a[]) throws IOException
    {
        File Fobj=new File("pra.txt");
        try
        {
            if(Fobj.createNewFile())
            {
                System.out.println("created");
            }   
            else 
            {
                 System.out.println("not");
        
            } 
        }
        catch(IOException e)
        {
            System.out.println("Error");
            e.printStackTrace();
        }
        try
         {
            FileWriter Wobj = new FileWriter("pra.txt");
            Wobj.write("hello prachi");
            Wobj.close();
            System.out.println("Successfully wrote to the file.");
        } 
          catch (IOException e)
        {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }

        try
         {
        
            File nfile=new File("hello.txt");
            //File Obj = new File("pra.txt");
            Scanner sobj = new Scanner(Fobj);
            while (sobj.hasNextLine())
            {
                 String data = sobj.nextLine();
                 try
                 {
                    FileWriter Wobj = new FileWriter("hello.txt");
                    Wobj.write(data);
                    Wobj.close();
                    System.out.println("Successfully wrote to the file.");
                } 
                 catch (IOException e)
                {
                    System.out.println("An error occurred.");
                e.printStackTrace();
                }
        
            }
            sobj.close();
          } 
            catch (FileNotFoundException e)
           {
             System.out.println("An error occurred.");
                e.printStackTrace();
          }


          String path = "C:\\LB\\pra.txt";
        try 
        {
             FileReader fr = new FileReader(path);
            BufferedReader br = new BufferedReader(fr);
            String line = br.readLine();
            while(line != null) {
            System.out.println(line);
            line = br.readLine();
    }
    br.close();
} catch (Exception ex) {
}

    }
  
    public static copyfile()
    {
        File infFile=new File("dest.txt");
        File oFile=new File("dest.txt");

        FileReader fr=null;
        FileWriter fw=null;

        try
        {
            fr=new FileReader(infFile);
            fw=new FileWriter(oFile);
            int ch;
            while(ch=fr.read()!=-1)
            {
                fw.append(ch);
            }

        }
        catch(IOException e)
        {

        }

    }


}
