import java.util.*;


public class Book {
    public String Name;
    public int Prize;

    public Book(String s,int i)
    {
        this.Name = s;
        this.Prize= i;

    }
    public void display()
    {
        System.out.println("BOOK Name : "+this.Name+" Prize : "+this.Prize);
    }

    
}
class Collection3
{
     public static void main(String str[])
     {
        LinkedList<Book> lobj = new LinkedList<Book>();

        lobj.add(new Book("Let us C",400));
        lobj.add(new Book("C programing",789));
        lobj.add(new Book("C++ Programing",2343));
        lobj.add(new Book("Angular java",3545));
        lobj.add(new Book("Data structure",8989));

        Iterator iobj = lobj.iterator();
        Book bref = null;
        
        System.out.println("Elements of linked list are : ");
        while(iobj.hasNext())
        {
            bref = iobj.next();
            bref = display();
        }
        lobj.clear();
     }
}