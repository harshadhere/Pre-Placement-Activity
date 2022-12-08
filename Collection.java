import java.util.*;
 
public class Collection
{
    public static void main(String args[])
    {
        LinkedList <Integer>lobj= new  LinkedList<Integer>();
        lobj.add(11);
        lobj.add(23);
        lobj.add(22);
        lobj.add(25);
         
        lobj.add(54);
        Iterator iobj =  lobj.iterator();
        System.out.println("Data using iterator");
        while(iobj.hasNext())
        {
            System.out.print("| ");System.out.print(iobj.next());System.out.print(" |  --> ");

        }
        System.out.println("|  NULL  |");
        System.out.println("");
        if(lobj.contains(54))
        {
            System.out.println("ELement is present");
        }
        else
        {
            System.out.println("Not present ");
        }
        System.out.println("Element of linked list element is : "+lobj);

        System.out.println("Element of linked list element is : "+lobj);

        lobj.addFirst(1);
        System.out.println("Element of linked list element is : "+lobj);
        lobj.addLast(32);

        System.out.println("Element of linked list element is : "+lobj);

        lobj.remove();
        System.out.println("Element of linked list element is : "+lobj);
        lobj.remove(2);

        System.out.println("Element of linked list element is : "+lobj);
        lobj.removeLast();

        System.out.println("Element of linked list element is : "+lobj);

        
        System.out.println("Number of elements are : "+lobj.size());

        lobj.set(1,3434);
        
        System.out.println("Element of linked list element is : "+lobj);

        lobj.clear();
        System.out.println("Element of linked list element is : "+lobj);


    
    }
}