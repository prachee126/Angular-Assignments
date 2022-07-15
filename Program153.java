import java.lang.*;
import java.util.*;

public class Program153
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string");
        String str=sobj.nextLine();
        str=str.toLowerCase();
        
        char Arr[]= str.toCharArray();
        //hashmap is Asynchronous
        HashMap<Character,Integer>hobj=new HashMap<>();
        
        for(char ch:Arr)
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
        //hashmap traversal
        Set<Character>setobj=hobj.keySet();
        System.out.println(setobj);
        //for(int i=0;i<setobj.size();i++)
       int iMAx=0;
       char c=' ';
        for(char value:setobj)
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