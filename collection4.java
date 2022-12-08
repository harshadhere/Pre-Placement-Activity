import java.util.ArrayList;
import java.util.Iterator;

public class Collection4 {

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
        {
            System.out.println(iobj.next());
        }
        

        aobj.clear();

    }
    
}
