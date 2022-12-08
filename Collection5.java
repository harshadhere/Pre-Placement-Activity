import java.util.ArrayList;
import java.util.Iterator;

public class Collection5{

    public static void main(String arg[])
    {
        ArrayList <Float>aobj = new ArrayList<Float>();



        aobj.add(20.4f);
        aobj.add(34.4f);
        aobj.add(30.2f);
        aobj.add(40.2f);

        Iterator iobj = aobj.iterator();

       
        System.out.println("Elements are : ");
         
        while(iobj.hasNext())
        {9
            System.out.println(iobj.next());
        }

        aobj.toArray();
        System.out.println("Elements are : "+aobj);
       
        System.out.println("Elements are : "+aobj.size());
        

        aobj.clear();

    }
    
}
