
    import java.util.*;
 
public class Collection1
{
    public static void main(String args[])
    {
        LinkedList <String>lobj= new  LinkedList<String>();
        lobj.add("harshad ");
        lobj.add("Suraj ");
        lobj.add("Shubah ");
        lobj.add("Sanket ");
         
        Iterator iobj =  lobj.iterator();
        System.out.println("Data using iterator");
        while(iobj.hasNext())
        {
           System.out.println(iobj.next());
        }
        if(lobj.contains("Suraj "))
        {
            System.out.println("ELement is present");
        }
        else
        {
            System.out.println("Not present ");
        }
        System.out.println("Element of linked list element is : "+lobj);

        System.out.println("Element of linked list element is : "+lobj);

        lobj.addFirst("Nayaab");
        System.out.println("Element of linked list element is : "+lobj);
        lobj.addLast("Harshnaa");

        System.out.println("Element of linked list element is : "+lobj);

        lobj.remove();
        System.out.println("Element of linked list element is : "+lobj);
        lobj.remove(3);

        System.out.println("Element of linked list element is : "+lobj);
        lobj.removeLast();

        System.out.println("Element of linked list element is : "+lobj);

        
        System.out.println("Number of elements are : "+lobj.size());

        lobj.set(1,"Harshad");
        
        System.out.println("Element of linked list element is : "+lobj);

        lobj.clear();
        System.out.println("Element of linked list element is : "+lobj);


    
    }
}
    

