
    import java.util.ArrayList;
import java.util.Iterator;
import java.util.Vector;

public class Collection6{

    public static void main(String arg[])
    {
        Vector <Float>aobj = new Vector<Float>();



        aobj.add(20.4f);
        aobj.add(34.4f);
        aobj.add(30.2f);
        aobj.add(40.2f);
      
      
        aobj.add(1,85.5f);

       


      
      

        Iterator iobj = aobj.iterator();

       
        System.out.println("Elements are : ");
         
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

        System.out.println("Elements are : "+aobj.clone());

        System.out.println("capacity of stack are : "+aobj.capacity());
        

        aobj.clear();

    }
    
}


