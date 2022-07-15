import java.lang.*;
import java.util.*;

public class Program154
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string");
        String str=sobj.nextLine();
        str=str.toLowerCase();
        String Arr[]=str.split(" ");//find space break word 

        HashMap<String,Integer>hobj=new HashMap<>();
        for(String ch:Arr)
        {
            
            if(hobj.containsKey(ch))
            {
                hobj.put(ch, hobj.get(ch)+1);
            }
            else
            {
                hobj.put(ch, 1);
            }
        }
        System.out.println(hobj);
        Set<String>setobj=hobj.keySet();
        System.out.println(setobj);
        //for(int i=0;i<setobj.size();i++)
       int iMAx=0;
       String c=" ";
        for(String value:setobj)
        {
            if(hobj.get(value)>iMAx)
            {
                iMAx=hobj.get(value);
                c=value;
            }
        }
        System.out.println("Maxoccurance: "+c+" "+iMAx);
        
        
    }   
}
